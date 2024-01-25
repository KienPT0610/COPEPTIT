#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
const ll e = 1e9 + 7;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vt(n, 0);
        for(int i = 0; i < n; i++) cin >> vt[i];
        sort(vt.begin(), vt.end());
        ll m = 0;
        for(int i = 0; i < n; i++) {
            m += vt[i] * i;
            m %= e;
        }
        cout << m << endl;
    }
}