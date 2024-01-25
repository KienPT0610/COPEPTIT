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
        int n, x; cin >> n >> x;
        int a[n] = {};
        for(int i = 0; i < n; i++) cin >> a[i];
        int it = lower_bound(a, a + n, x) - a;
        if(it==0) {
            cout << it-1 << endl;
            continue;
        }
        if(a[it]!=x) {
            it--;
        }
        cout << it+1 << endl;
    }
}