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
        int n; cin >> n; int a[n][n] = {};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) cin >> a[i][j];
        }
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            set<int> st;
            for(int j = 0; j < n; j++) {
                st.insert(a[i][j]);
            }
            for(auto x:st) mp[x]++;
        }
        int dem=0;
        for(auto x:mp) {
            if(x.second == n){dem++;}
        }
        cout << dem << endl;
    }
}