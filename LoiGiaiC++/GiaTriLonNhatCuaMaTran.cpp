#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus


int main() {
	int n; cin >> n;
	int a[n+1][n+1];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	int c = 0, p = 0;
	for(int i = 1; i <= n; i++) {
		c += a[i][i];
		p += a[n+1-i][i];
	}
	cout << c - p << endl;
}

