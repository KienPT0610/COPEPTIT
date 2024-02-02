#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		int cnt = 0;
		while(s.find("100")!=string::npos) {
			cnt += 3;
			s.erase(s.begin() + s.find("100"), s.begin() + s.find("100") + 3);
		}	
		if(cnt!=0)	cout << cnt << endl;
		else cout << "" << endl;
	}
}

