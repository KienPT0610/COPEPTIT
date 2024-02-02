#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

pair<int, int> p[9] = {
	{-1,-1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 0}, {0, 1}, {1, -1}, {1, 0}, {1, 1}
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n, m; cin >> n >> m;
		ll x[305][305];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) cin >> x[i][j];
		}
		ll h[5][5];
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) cin >> h[i][j];
		}
		
		ll sum = 0;
		for(int i = 1; i <= n-2; i++) {
			for(int j = 1; j <= m-2; j++) {
				for(int k = 0; k < 9; k++) {
					sum += h[1 + p[k].first][1 + p[k].second]*x[i + p[k].first][j + p[k].second];
				}
			}
		}
		cout << sum << endl;
	}
}

