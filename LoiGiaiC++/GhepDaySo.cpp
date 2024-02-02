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
        vector<int> vt(n*m, 0);
        for(int i = 0; i < n*m; i++) cin >> vt[i];
        sort(vt.begin(), vt.end());
        for(auto x:vt) cout << x << ' ';
        cout << endl;
    }
}