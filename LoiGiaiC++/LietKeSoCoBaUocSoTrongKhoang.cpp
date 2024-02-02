#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
#define lmt 1000006

//bool nto(int n) {
//	if(n<2) return false;
//	if(n<4) return true;
//	if(n%2==0 || n%3==0) return false;
//	for(int i=5; i<=sqrt(n); i++) {
//		if(n%i==0 || n%(i+2)==0) return false;
//	}
//	return true;
//}

int nto[lmt] = {};

void erathone() {
	nto[0] = nto[1] = 1;
	for(int i = 2; i <= sqrt(lmt); i++) {
		if(!nto[i]) {
			for(int j = i*i; j <= lmt; j+=i) {
				nto[j] = 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	erathone();
	while(t--) {
		ll l, r; cin >> l >> r;
		l = sqrt(l); r = sqrt(r);
		if(l>r) swap(l, r);
		int cnt = 0;
		for(int i = l; i <= r; i++) {
			if(!nto[i]){
				cnt++;
			}			
		}	
		cout << cnt << endl;
	}
}

