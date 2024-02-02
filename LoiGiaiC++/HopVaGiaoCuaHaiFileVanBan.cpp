#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

set<string> st, s1, s2;
string s;
map<string, int> mp;
void solve(string file, set<string>& sx) {
	ifstream fi;
	fi.open(file);
	while(fi>>s) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		st.insert(s);
		sx.insert(s);
	}
}

int main() {
	
	solve("DATA1.in", s1);
	solve("DATA2.in", s2);
	for(auto x : st) {
		cout << x << ' ';
	}
	cout << endl;
	for(auto x : s1) mp[x]++;
	for(auto x : s2) mp[x]++;
	for(auto x : mp) if(x.second>1) cout << x.first << ' ';
	cout << endl;
}

