#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
const ll e = 1e9 + 7;

ll a[1005][1005] = {};

ll C(ll k, ll n) {
	if(k==n) return 1;
	if(a[k][n]!=0) return a[k][n];
	if(k==0) a[k][n] = 1;
	else if(k==1) a[k][n] = n;
	else {
		a[k][n] = C(k-1, n-1) + C(k, n-1);
	}
	a[k][n]%= e;
	return a[k][n];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		ll n, k; cin >> n >> k;
		cout << C(k, n) << endl;
	}
}

