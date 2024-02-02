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
		int m = 0, vt = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(m < a[i]) {
				m = a[i];
				vt = i;
			}
		}
		int cnt = 0;
		while(a[vt]!=0) {
			for(int j = 0; j <  n; j++) {
				if(a[j]%2!=0) {
					a[j]--;
					cnt++;
				}
				a[j] /= 2;
			}	
			if(a[vt]!= 0) cnt++;
		}
		cout << cnt << endl;
	}
}

