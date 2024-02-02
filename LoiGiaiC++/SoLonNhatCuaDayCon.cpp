#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus


//#1

int main() {
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		int a[n]; for(auto &x : a) cin >> x;
		deque<int> dq;
		for(int i = 0; i < k; i++) {
			while(!dq.empty() && a[i] > a[dq.back()]) {
				dq.pop_back();
			}
			dq.push_back(i);
		}
		cout << a[dq.front()] << ' ';
		for(int i = k; i < n; i++) {
			if(dq.front() <= i-k) dq.pop_front();
			while(!dq.empty() && a[i] > a[dq.back()]) dq.pop_back();
			dq.push_back(i);
			cout << a[dq.front()] << ' ';
		}
		cout << endl;
	}
}


//#2
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(NULL); cout.tie(NULL);
//	int t; cin >> t;
//	while(t--) {
//		int n, k; cin >> n >> k;
//		int a[n]; for(auto &x:a) cin >> x;
//		multiset<int> st;
//		for(int i = 0; i < k; i++) {
//			st.insert(a[i]);
//		}
//		cout << *st.rbegin() <<" ";
//		for(int i = k; i < n; i++) {
//			st.erase(st.find(a[i-k]));
//			st.insert(a[i]);
//			cout << *st.rbegin() << ' ';
//		}
//		cout << endl;
//	}
//}

