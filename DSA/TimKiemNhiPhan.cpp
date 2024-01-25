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
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(binary_search(a, a+n, k)) {
            int vt = lower_bound(a, a + n, k)-a;
            cout << vt + 1;
        } else cout << "NO";
        cout << endl;
    }
}