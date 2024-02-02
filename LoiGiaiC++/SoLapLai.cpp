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
        ll x, y, a; cin >> a >> x >> y;
        ll s = __gcd(x, y);
        while(s--) {
            cout << a;
        }
        cout << endl;
    }
}