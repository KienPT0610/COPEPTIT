#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus


int main() {
	string s; cin >> s;
	int a=0, b=0;
	for(int i=0; i < s.length(); i++) {
		if(s[i]=='A') {
			b=min(a,b)+1;
		} else {
			a=min(a,b)+1;
		}
	}
	cout << a << endl;
}

