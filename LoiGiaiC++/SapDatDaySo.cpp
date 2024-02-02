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
        ll n; cin >> n;
        ll a[n] = {};
        for(auto &x : a) cin >> x;
        sort(a, a + n);
        for(int i = 0; i < n; i++) {
            (binary_search(a, a + n, i)) ? cout << i:cout << -1;
            cout << ' ';
        }
        cout << endl;
    }
}