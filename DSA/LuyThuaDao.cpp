#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
const ll e = 1e9+7;
using namespace std;
//JohnBelus//

ll mul(ll n, ll k) {
    if(k==0) return 1;
    if(k==1) return n;
    if(k%2==0) return mul(n*n%e, k/2)%e;
    return n*mul(n*n%e, k/2)%e;
}

ll poww(ll n, ll k) {
    if (k == 0) return 1;
    ll x = poww(n, k / 2);
    if (k % 2 == 0) return (x * x) % e;
    return (n * ((x * x) % e)) % e;
}

ll rev(ll n) {
    ll s = 0;
    while(n>0) {
        s = s*10 + n%10;
        n /= 10;
    }
    return s;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll r = rev(n);
        cout << poww(n, r) << endl;
    }
}