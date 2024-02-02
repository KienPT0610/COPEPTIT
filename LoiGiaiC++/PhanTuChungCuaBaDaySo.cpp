#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus


void nhap(ll a[], int n) {
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

ll a[1000006], b[1000006], c[1000006];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		ll m, n, p; cin >> n >> m >> p;
		nhap(a, n); nhap(b, m); nhap(c, p);
		int lc = 0;
		int x = 0, y = 0, z = 0;
		while(x < n && y < m && z < p) {
			if(a[x] == b[y] && b[y] == c[z]) {
				cout << a[x] << ' ';
				lc = 1;
				x++; y++; z++;
			}
			else if(a[x] < b[y]) {
				x++;
			} 
			else if(b[y] < c[z]) {
				y++;
			} else {
				z++;
			}
		}
		if(!lc) cout << -1;
		cout << endl;
	}
}

