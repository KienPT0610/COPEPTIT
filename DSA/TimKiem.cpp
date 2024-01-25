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
        int a[n] = {};
        for(int &i : a) cin >> i;
        if(binary_search(a, a+n, k)) {
            cout << 1;
        } else cout << -1;
        cout << endl;
    }
}