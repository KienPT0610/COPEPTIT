#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

ll bcnn(ll a, ll b) {
    ll x=__gcd(a,b);
    return a*b/x;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll x, y, z, n; cin >> x >> y >> z >> n;
        ll x1=bcnn(x,y);
        ll x2=bcnn(x1, z);
        ll s=pow(10, n - 1);
        if(x2>pow(10, n)) cout << -1 << endl;
        else{
            ll ss=s/x2;
            if(s%x2!=0) ss++;
            cout << x2*ss << endl;
        }
    }
}