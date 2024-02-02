#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n, m; cin >> n >> m;
		int a[n], b[m];
		map<int, int> mp;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		} 
		for(int &i:b) cin >> i;
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < mp[b[i]];j++) {
				cout << b[i] << ' ';
			}
			mp[b[i]] = 0;
 		}
 		for(auto x : mp) {
 			for(int j = 0; j < x.second; j++) {
 				cout << x.first << ' ';
 			}
 		}
 		cout << endl;
	}
}

