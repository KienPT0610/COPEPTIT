#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//


ll max_in_matrix(ll n, ll a[101][101], bool row[101], bool col[101]){
    ll m = 0, idi = 0, idj = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(m < a[i][j] && !row[i] && !col[j]) {
                m = a[i][j];
                idi = i;
                idj = j;
            }
        }
    }
    row[idi] = true;
    col[idj] = true;
    return m;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n, a[101][101] = {};
        bool row[101] = {}, col[101] = {};
        cin >> n;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) cin >> a[i][j];
        }
        ll s = 0;
        for(int i = 1; i <= n; i++) {
            s += max_in_matrix(n, a, row, col);
        }
        cout << s << endl;
    }
}
