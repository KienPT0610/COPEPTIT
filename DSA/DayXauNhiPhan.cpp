#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    // solve(vt);
    while(t--){
        vector<string> vt(94, "");
        int n, k; cin >> n >> k;
        vt[1] = "0"; vt[2] = "1";
        for(int i = 3; i <= n; i++) {
            vt[i] = vt[i-2] + vt[i-1];
        }
        cout << vt[n][k-1] << endl;
    }
}