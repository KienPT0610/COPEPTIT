#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        multiset <int> st;
        for(int i = 0; i < n + m; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        for(auto x : st) {
            cout << x << ' ';
        }
        cout << endl;
    }
}