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
		ll a[n], d = 0;
		for(auto &x : a){
			cin >> x;
			if(x<0) d++;	
		}
		ll m = a[0];
		for(int i = 1; i < n; i++){
			ll tmp = a[i];
			ll x = a[i];
			for(int j = i - 1; j >= 0; j--) {
				tmp *= a[j];
				x = max(x, tmp);
			}
			m = max(x, m);
		}	
		cout << m << endl;
	}
}

