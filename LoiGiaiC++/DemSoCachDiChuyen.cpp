#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus

int a[300][300];
int n, k, cnt;

void Try(int i, int j, int sum){
	sum += a[i][j];
	if(i==n-1&&j==n-1&&sum==k) cnt++;
	if(i+1<n) Try(i+1, j, sum);
	if(j+1<n) Try(i, j+1, sum);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		cin >> n >> k;
		cnt = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		Try(0, 0, 0);
		cout << cnt << endl;
	}
}

