#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

ll pow(ll x, ll y, ll p) {
    if(y == 0) return 1;
    if(y%2==0) return pow(x*x%p, y/2, p)%p;
    return x*pow(x*x%p, y/2, p)%p;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll x, y, p; cin >> x >> y >> p;
        cout << pow(x, y, p) << endl;
    }
}