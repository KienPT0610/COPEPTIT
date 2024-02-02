#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus
const ll e = 1e9 + 7;

ll mul(ll h, ll g) {
	if(g==0) return 1;
	if(g%2==0) return mul(h*h%e, g/2)%e;
	else {
		return h*mul(h*h%e, g/2)%e;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		ll a[n];
		ll g=0, h=1;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n - 1; i++) {
			h *= a[i];
			for(int j = i + 1; j < n; j++) {
				g = max(g, __gcd(a[i], a[j]));		
			}
		}
		h *= a[n-1];
		cout << mul(h, g) << endl;
	}
}

