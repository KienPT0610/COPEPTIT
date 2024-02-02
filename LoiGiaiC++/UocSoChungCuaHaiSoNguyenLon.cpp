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
		ll a; cin >> a;
		string b; cin >> b;
		ll s = 0;
		for(auto x : b) {
			s = (s*10 + x - '0')%a;
		}
		cout << __gcd(s, a) << endl;
	}
}

