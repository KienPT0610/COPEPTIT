#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus


bool check(string s) {
	if(s.find("1")==string::npos || s.find("0")==string::npos) return true;
	if(s.find("01")==string::npos) return false;
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n+1]; a[0] = 0;
		string s = "";
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			if(a[i] > a[i-1]) {
				s += "1";
			} else {
				s += "0";
			}
		}
		int l = 0;
		cout << s << endl; 
		for(int i = 1; i < s.length(); i++) {
			string res = "";
			if(s.length()-i+1 > l) {
				for(int j = s.length()-1; j >= i; j--) {
					res = s.substr(i, j - i + 1);
					if(check(res)) {
						l = max(l, i -j + 1);
						break;
					}
				}
			}
		}
		cout << l << endl;
	}
}

