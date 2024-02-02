#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		string tmp; cin >> tmp;
		multiset<char> st(tmp.begin(), tmp.end());
		int l = 0, r = -1;
		int m = s.length();
		for(int i = 0; i < s.length(); i++) {
			if(st.find(s[i])!=st.end()) {
				multiset<char> s1=st;
				s1.erase(s1.find(s[i]));
				for(int j=i+1; j<s.length(); j++){
					if(s1.find(s[j])!=s1.end()) {
						s1.erase(s1.find(s[j]));
					}
					if(s1.empty()){
						if(j-i+1<m) {
							l=i; r=j; m=j-i+1;
						}
						break;
					}
				}
			}
		}
		if(r==-1) cout << r << endl;
		else {
			for(int j = l; j <= r; j++) {
				cout << s[j];
			}
			cout << endl;
		}
	}
}

