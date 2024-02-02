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
        int n; cin >> n; int a[n + 1];
        int dp[n + 1] = {}, s = 0;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            dp[i] += a[i] + dp[i - 1];
            s += a[i];
        }
        int lc = 0;
        for(int i = 1; i <= n; i++) {
            if(s - dp[i] == dp[i] - a[i]) {
                lc = 1;
                cout << i << endl;
                break;
            }
        }
        if(!lc) cout << -1 << endl;
    }
}