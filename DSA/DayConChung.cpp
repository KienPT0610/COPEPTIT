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
        int n, m, k; cin >> n >> m >> k;
        int a[n], b[m], c[k];
        // vector<int> a(n), b(m), c(k);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;

        int x = 0, y = 0, z = 0, lc = 0;;
        while(x < n && y < m && z < k) {
            if(a[x]==b[y] && a[x]==c[z]) {
                cout << a[x] << ' ';
                lc = 1;
                x++; y++; z++;
                // continue;
            }
            else if(a[x] < b[y]) {
                x++;
            } else if(b[y] < c[z]) {
                y++;
            } else {
                z++;
            }
        }
        if(!lc) cout << "NO";
        cout << endl;
    }
}