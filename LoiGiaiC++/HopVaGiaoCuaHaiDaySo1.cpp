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
        int a[n], b[m];
        set<int> st;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            st.insert(a[i]);
            if(mp[a[i]]==0) mp[a[i]]=1;
        }
        for(int i = 0; i < m; i++) {
            cin >> b[i];
            st.insert(b[i]);
            if(mp[b[i]]==1) mp[b[i]]=2;
        }
        for(auto x : st) cout << x << ' ';
        cout << endl;
        for(auto x : mp) {
            if(x.second==2) {
                cout << x.first << ' ';
            }
        }
        cout << endl;
    }
}