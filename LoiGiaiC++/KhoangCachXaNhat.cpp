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
		int a[n];
		for(auto &x:a) cin >> x;
		int l = 0;
		for(int i = 0; i < n; i++) {
			for(int j = n - 1; j >= i + 1; j--) {
				if(a[i] <= a[j]) {
					l = max(l, j - i);
					break;
				}
			}
		}	
		cout << l << endl;
	}
}

