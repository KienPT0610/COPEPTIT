#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n, p; cin >> n >> p;
		int cnt = 0;
		for(int i = p; i <= n; i++) {
			int x = i;
			while(x%p==0) {
				cnt++;
				x/=p;
			}
		}	
		cout << cnt << endl;
	}
}

