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
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        ll cnt = 0;
        for(int i = 0; i < n; i++) {
            int vt = lower_bound(a + i + 1, a + n, a[i] + k) - a;
            cnt += (vt - 1) - (i + 1) + 1;
        }
        cout << cnt << endl;
    }
}