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
        int n; cin >> n;
        int a[n], dp[n]={};
        for(int &x:a) cin >> x;
        dp[0] = 1;
        for(int i = 1; i < n; i++) {
            dp[i] = 1;
            for(int j = i - 1; j >= 0; j--) {
                if(a[i] > a[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        sort(dp, dp + n);
        cout << dp[n-1] << endl;
    }
}