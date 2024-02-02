#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus


map<string, int> mp;

int main() {
	int t = 2;
	while(t--) {
		int x, y;
		string s1, s2; 
		cin >> s1 >> x;
		string tmp; cin >> tmp;
		cin >> y >> s2;
		mp[s1] += x;
		mp[s2] += y;
	}
	for(auto x:mp) {
		cout << x.first << ' ' << x.second << endl;
	}
}

