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
        string s; cin >> s;
        ll tmp = 0;
        ll m; cin >> m;
        for(int i = 0; i < s.length(); i++) {
            tmp = tmp*10 + (s[i] - '0');
            tmp %= m;
        }
        cout << tmp << endl;
    }
}