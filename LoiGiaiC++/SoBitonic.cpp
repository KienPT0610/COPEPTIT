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
		int n; cin >> n;
		int a[n+1];
		for(int i = 1; i <= n; i++) cin >> a[i]; 
		int t[n+1], g[n+1];
		for(int i = 1; i <= n; i++) {
			t[i] = 1;
			for(int j = 1; j < i; j++) {
				if(a[j] < a[i]) {
					t[i] = max(t[i], t[j] + 1);
				}
			}
		}
		
		for(int i = n; i >= 1; i--) {
			g[i] = 1;
			for(int j = n; j > i; j--) {
				if(a[i] > a[j]) {
					g[i] = max(g[i], g[j] + 1); 
				}
			}
		}
		int tmp = 0;
		for(int i = 1; i <= n; i++) {
			tmp = max(tmp, t[i] + g[i] - 1);
		}
		cout << tmp << endl;
	}
}

