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
		int n, m; cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) cin >> a[i][j];
		}
		int h1=0, h2=n-1, c1=0, c2=m-1;
		vector<int> v;
		while(h1<=h2&&c1<=c2) {
			for(int i = c1; i <= c2; i++) {
				v.push_back(a[h1][i]);
			}
			h1++;
			for(int i = h1; i <= h2; i++) {
				v.push_back(a[i][c2]);
			}
			c2--;
			if(h1<=h2) {
				for(int i = c2; i >= c1; i--) {
					v.push_back(a[h2][i]);
				}
				h2--;
			}
			if(c1<=c2) {
				for(int i = h2; i >= h1; i--) {
					v.push_back(a[i][c1]);
				}
				c1++;
			}
		}
		for(int i = v.size()-1; i>=0; i--) {
			cout << v[i] << ' ';
		}
		cout << endl;
	}
}

