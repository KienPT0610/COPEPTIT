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
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		ll prefix[n];
		memset(prefix, 0, sizeof(prefix));
		prefix[0] = a[0];
		for(int i = 1; i < n; i++) {
			prefix[i] = a[i];
			ll tmp = 0;
			for(int j = i - 1; j >= 0; j--) {
				if(a[i] > a[j]) {
					tmp = max(tmp, prefix[j]);
				}
			}
			prefix[i] += tmp;
		}
		sort(prefix, prefix+n);
		cout << prefix[n-1] << endl;
	}
}

