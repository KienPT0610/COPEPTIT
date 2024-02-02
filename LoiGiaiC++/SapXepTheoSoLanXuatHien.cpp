#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second != b.second) return a.second > b.second;
	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		} 
		vector<pair<int, int>> vt(mp.begin(), mp.end());
		sort(vt.begin(), vt.end(), cmp);
		for(auto x : vt) {
			for(int j = 0; j < x.second; j++)
				cout << x.first << ' ';
		}
		cout << endl;
	}
}

