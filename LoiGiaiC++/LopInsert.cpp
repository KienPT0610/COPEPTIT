#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	ifstream fi; fi.open("DATA.in");
	int n, m, a[1005] = {};
	fi >> n >> m;
	int x;
	while(n--) {
		fi >> x;
		a[x] = 1; 
	}	
	set<int> st;
	while(m--) {
		fi >> x;
		if(a[x]) {
			st.insert(x);
		}
	}
	for(auto x : st) cout << x << ' ';
}

