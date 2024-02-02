#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
const ll e = 1e9 + 7;
using namespace std;
//JohnBelus//

ll poww(ll a, ll b) {
    if(b == 0) return 1;
    if(b == 1) return a%e;
    if(b%2==0) return poww(a*a%e, b/2)%e;
    return (a*poww(a*a%e, b/2))%e;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        ll s = 0;
        for(ll i = 1; i <= n; i++) {
            s += poww(i, k);
        }
        cout << s << endl;
    }
}