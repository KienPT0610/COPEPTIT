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
        int n, k; cin >> n >> k;
        int a[n] ={};
        int s = 0;
        for(auto &i : a) cin >> i, s += i;
        sort(a, a + n);
        k = min(k, n - k);
        for(int i = 0; i < k; i++) {
            s -= 2 * a[i];
        }
        cout << s << endl;
    }
}