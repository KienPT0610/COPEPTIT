#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

/*
x*p + 1 = i*i;

-> i*i-1/p = x;

*/

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		ll b, p; cin >> b >> p;
		ll cnt = 0;
		for(ll i = 1; i <= p; i++) {
			if(i*i%p==1) {
				ll c = i + p*(b/p);
				if(c>b) c-=p;
				cnt += (c-i)/p + 1;
			}
		}	
		cout << cnt << endl;
	}
}

