#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ifstream fi;
	fi.open("DATA.in");
	string s;
	ll sum = 0;
	while(fi>>s) {
		if(s.length() >= 10) continue;
		else {
			sum += stoi(s);
		}
	}
	cout << sum << endl;
}

