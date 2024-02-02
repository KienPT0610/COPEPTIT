#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		ll a[n+5];
		for(int i = 0; i < n; i++) cin >> a[i];
		ll b[n+5];
		b[0] = a[0];
		ll M = b[0];
		for(int i = 1; i < n; i++) {
			b[i] = max(a[i], b[i-1]+a[i]);
			M = max(M, b[i]);
		}
		cout << M << endl;
	}
}

