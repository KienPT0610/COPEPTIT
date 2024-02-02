#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ifstream fi;
	fi.open("DATA.in");
	int s;
	map<int, int> mp;
	while(fi>>s) {
		mp[s]++;
	}
	for(auto x : mp) {
		cout << x.first << ' ' << x.second << endl;
	}
}

