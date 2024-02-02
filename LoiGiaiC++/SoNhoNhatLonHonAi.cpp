#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		set<int> st;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			st.insert(a[i]);
		}
		for(int i = 0; i < n; i++) {
			if(st.upper_bound(a[i])!=st.end()) {
				cout << *st.upper_bound(a[i]) <<' ';
			} else {
				cout << '_' << ' ';
			}
		}
		cout << endl;
	}
}

