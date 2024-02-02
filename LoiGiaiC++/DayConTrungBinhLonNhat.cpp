#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		ll a[n], b[n];
		for(auto &x:a) cin >> x;
		ll M = 0;
		for(int i = 0; i < k; i++) M += a[i];
		int r = k - 1, l = 0;
		ll m = M;
		for(int i = k; i < n; i++) {
			M -= a[i-k];
			M += a[i];
			if(M > m) {
				r = i;
				l = i-k+1;
				m = M;
			}
		}
		
		for(int j = l; j <= r; j++) cout << a[j] << ' ';
		cout << endl;
	}
}

