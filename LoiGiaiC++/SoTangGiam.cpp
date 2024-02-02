#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

bool check(ll n) {
    while()
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll l = pow(10, n - 1);
        ll r = pow(10, n) - 1;
        int cnt = 0;
        for(ll i = l; i <= r; i++) {
            if(check(i)) {
                cnt++;
            }
        }
    }
}