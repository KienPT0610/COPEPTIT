#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n, m; cin >> n >> m;
		int a[n+5][m+5];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}	
		vector<vector<int>> vt(n + m);
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				vt[i+j].push_back(a[i][j]);
			}
		}
		for(int i = 0; i < vt.size(); i++) {
			if(i%2==0) {
				for(int j = vt[i].size()-1; j>=0; j--) {
					cout << vt[i][j] << ' ';
				}
			} else {
				for(auto x : vt[i]) cout << x << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}

