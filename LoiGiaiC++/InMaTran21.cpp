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
		int a[4*n+5][4*n+5];
		int d=1;
		for(int i = 1; i <= 4*n; i++){
			for(int j = 1; j <= 4*n; j++) {
				a[i][j] = d++;
			}
		}
		int c1 = 1, h2 = 4*n, h1 = 2, c2 = 4*n - 1;
		vector<int> v1, v2;
		while(c1<=c2&&h1<=h2) {
			for(int i=h1-1; i <= h2; i++) {
				v1.push_back(a[i][c1]);
			}
			c1+=2;
			for(int i = c1-1; i <= c2; i++) {
				v1.push_back(a[h2][i]);
			}
			h2-=2;
			if(c1<=c2){
				for(int i = h2+1; i >= h1; i--) {
					v1.push_back(a[i][c2]);
				}	
				c2-=2;
			}
			if(h1<=h2){
				for(int i = c2+1; i >= c1; i--) {
					v1.push_back(a[h1][i]);
				}
				h1+=2;
			}
		}
		int m = 4*n*4*n;
		for(int i = v1.size()-1; i>=0; i--) {
			cout << m - v1[i] + 1 << ' ';
		}
		cout << endl;
		for(int i = v1.size()-1; i>=0; i--) {
			cout << v1[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}

