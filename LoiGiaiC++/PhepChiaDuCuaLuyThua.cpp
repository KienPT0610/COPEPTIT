#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

ll POW(ll tmp, ll b, ll m) {
    if(b == 0) return 1;
    if(b%2==0) return POW(tmp*tmp%m, b/2, m) % m;
    return tmp*POW(tmp*tmp%m, b/2, m) % m;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        ll b, m; cin >> b >> m;
        ll tmp = 0;
        for(int i = 0; i < s.length(); i++) {
            tmp = tmp*10 + (s[i] - '0');
            tmp %= m;
        }
        cout << POW(tmp, b, m) << endl;
    }
}