#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int a[505][505];
		int n, m, l; cin >> n >> m >> l;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				cin >> a[i][j];
			}
		}
		int prefix[505][505];
		memset(prefix, 0, sizeof(prefix));
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + a[i][j];
			}
		}
		for(int i = 1; i <= n-l+1; i++) {
			for(int j = 1; j <= m-l+1; j++) {
				int h1=i, h2=i+l-1, c1=j, c2=j+l-1, sum = 0;
				sum = prefix[h2][c2] - prefix[h2][c1-1] - prefix[h1-1][c2] + prefix[h1-1][c1-1];
				sum /= (l*l);
				cout << sum << ' ';
			}
			cout << endl;
		}
	}
}

