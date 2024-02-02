#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int m, n;
char a[25][25];

void find_m(int i, int j, int pos) {
	if(i+pos<n && j+pos<n) {
		if(a[i+pos][j]=='X' && a[i][j+pos]=='X') {
			find_m(i, j, pos + 1);
			for(int x = 1; x <= pos; x++) {
				if(a[i+pos][j+x]=='O' && a[i+x][j+pos]=='O') return;
			}
			m = max(pos+1, m);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		cin >> n;
		m = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++ ){
				if(a[i][j]=='X' && m <= min(n-1-i, n-1-j)) {
					find_m(i, j, 0);
				}
			}
		}
		cout << m << endl;
	}
}

