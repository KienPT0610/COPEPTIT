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
		ll cnt=0;
		for(int i = 0; i < s.length(); i++) {
			ll tmp8 = 0;
			ll tmp3 = 0;
			for(int j = i; j < s.length(); j++) {
				tmp8 = (tmp8*10 + s[j] - '0') % 8;
				tmp3 = (tmp3*10 + s[j] - '0') % 3;
				if(tmp8==0 && tmp3!=0) cnt++;
			}
		}
		cout << cnt << endl;
	}
}

