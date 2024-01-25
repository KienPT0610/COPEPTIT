#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
const ll e = 1e9+7;
using namespace std;
//JohnBelus//

map<ll, ll> mp;

void solve() {
    mp[0] = 0; mp[1] = 1;
    for(int i = 2; i <= 1e9 + 1; i++) {
        mp[i] = mp[i-1] + mp[i-2];
        mp[i] %= e;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    solve();
    while(t--){
        ll n; cin >> n;
        cout << mp[n] << endl;
    }
}