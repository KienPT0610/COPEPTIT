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
		int a[n+5];
		ll dp[n+5];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		dp[0] = a[0]; dp[1] = a[1], dp[2] = a[2] + a[0];
		for(int i = 3; i < n; i++) {
			dp[i] = max(dp[i-2], dp[i-3]);
			dp[i] += a[i]; 
		}
		sort(dp, dp + n);
		cout << dp[n-1] << endl;
	}
	return 0;
}

