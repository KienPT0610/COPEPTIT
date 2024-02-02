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
		int a[n]; for(int &i : a) cin >> i;
		sort(a, a+n);
		int d = a[n-1] - a[0], cnt = 0;
		for(int i = 1; i <= d; i++) {
			bool f = true;
			for(int j = 1; j < n; j++) {
				if((a[j]-a[0])%i!=0) {
					f = false;
					break;
				}
			}
			if(f==true) cnt++;
		}	
		cout << cnt << endl;
	}
}

