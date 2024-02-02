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
		int len, n; cin >> len >> n;
		string s; cin >> s;
		vector<vector<int>> dp(len, vector<int>(n, 0));
		dp[0][(s[0]-'0')%n]++;
		for(int i = 1; i < len; i++) {
			dp[i][(s[i]-'0')%n]++;
			for(int j = 0; j < n; j++) {
				dp[i][j] += dp[i-1][j];
				dp[i][(j*10+(s[i]-'0'))%n] += dp[i-1][j];
			}
		}
		cout << dp[len-1][0] << endl;
	}
}

