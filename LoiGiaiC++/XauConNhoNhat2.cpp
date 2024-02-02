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
		set<char> st(s.begin(), s.end());
		int m=s.length();
		for(int i = 0; i < s.length(); i++){
			set<char> s1 = st;
			for(int j = i; j < s.length(); j++) {
				if(s1.find(s[j])!=s1.end()) {
					s1.erase(s1.find(s[j]));
				} 
				if(s1.empty()) {
					if(m>(j-i+1)) {
						m=j-i+1;
					}
					break;
				}
			}
		}
		cout << m << endl;
	}
}

