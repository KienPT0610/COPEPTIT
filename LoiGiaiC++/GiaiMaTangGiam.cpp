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
		stack<int> st;
		st.push(1);
		int d = 2;
		for(int i = 0; i < s.length(); i++) {
			if(s[i]=='D') st.push(d++);
			else {
				while(!st.empty()) {
					cout << st.top();
					st.pop();
				}
				st.push(d++);
			}
		}	
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
}

