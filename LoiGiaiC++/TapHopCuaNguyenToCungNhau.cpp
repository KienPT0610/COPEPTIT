#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		ll n, m; cin >> n >> m;
		ll s = n*(n + 1)/2;
		s -= m;
		if(s%2!=0) {
			cout << "No" << endl;
		} else {
			ll x = s/2;
			ll y = x + m;
			if(__gcd(x, y)==1) {
				cout << "Yes" << endl;
			} else cout << "No" << endl;
		}
	}
}

