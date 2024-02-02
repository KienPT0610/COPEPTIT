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
        int n, k; cin >> n >> k;
        int a[n], b[n] = {}, x = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] <= k) {
                x++;
                b[i] = 1;
            }
        }
        int m = 0;
        for(int i = 0; i < x; i++) {
            m += b[i];
        }
        int M = m;
        for(int i = x; i < n; i++) {
            m -= b[i-x];
            m += b[i];
            M = max(M, m);
        }
        cout << x - M << endl;
    }
}