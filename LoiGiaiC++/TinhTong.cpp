#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int Sum(string s) {
	if(s.length() >= 10) return 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[0]=='-') continue;
		if(s[i] < '0' || s[i] > '9') return 0;
	}
	int sum = 0;
	sum += stoi(s);
	return sum;	
}

int main() {
	ifstream fi;
	fi.open("DATA.in");
	string s;
	ll sum = 0;
	while(fi>>s) {
		sum += Sum(s);
	}
	cout << sum << endl;
}

