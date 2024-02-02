#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
const ll e = 1e9+7;
using namespace std;
//JohnBelus//

ll POW(ll a, ll x) {
    if(x==0) return 1;
    if(x%2==0) return POW(a*a%e, x/2)%e;
    return a*POW(a*a%e, x/2)%e;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n, x; cin >> n >> x;    
        ll s = 0;
        for(ll i = n - 1; i >= 0; i--) {
            ll a; cin >> a;
            s += (a%e)*POW(x, i);
            s %= e;
        }   
        cout << s << endl;
    }
}