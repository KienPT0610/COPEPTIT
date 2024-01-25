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
        int M = 0, mi = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            M = max(M, a[i]);
        }
        for(int j = 0; j < m; j++) {
            cin >> b[j];
            mi = min (mi, b[j]);
        }
        cout << (ll)mi*M << endl;
    }
}