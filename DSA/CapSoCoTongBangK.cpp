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
        int a[n] = {};
        for(auto &i : a) cin >> i;
        sort(a, a + n);
        int cnt = 0;
        for(int i = 0; i < n - 1; i++) {
            int start = lower_bound(a + i + 1, a + n, k - a[i]) - a;
            int end = upper_bound(a + i + 1, a + n, k - a[i]) - a;
            cnt += end - start;
        }
        cout << cnt << endl;
    }
}