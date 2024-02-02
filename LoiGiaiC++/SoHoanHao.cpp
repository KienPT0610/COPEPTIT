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
		ll n; cin >> n;
		vector<ll> vt;
		int a[7] = {1, 2, 4, 6, 12, 16, 18};
		for(int i = 0; i < 7; i++) {
			vt.push_back(pow(2, a[i]) * (pow(2, a[i]+1)-1));
		}
		int check = 0;
		for(auto x:vt) {
			if(x==n) {
				check = 1;
				break;
			}
		}
		cout << check << endl;
	}
	
}

