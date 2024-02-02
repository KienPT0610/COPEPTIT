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
        int n; cin >> n;
        int a[n]; for(auto &x:a) cin >> x;
        prev_permutation(a, a+n);
        for(auto x:a) cout << x << ' ';
        cout << endl;
    }
}