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
        set<int> st;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
            mp[x] = 1;
        }
        for(int i = 0; i < m; i++) {
            int x; cin >> x;
            st.insert(x);
            if(mp[x]==1) mp[x] = 2;
        }
        for(auto x : st) cout << x << ' ';
        cout << endl;
        for(auto x : mp) {
            if(x.second==2) cout << x.first << ' ';
        }
        cout << endl;
    }
}