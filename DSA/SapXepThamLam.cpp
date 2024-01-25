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
        int a[n] = {};
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int lc = 1;
        for(int i = 1; i <= n; i++) {
            if(a[i]!=i && a[i]!=n-i+1) {
                cout << "No" << endl;
                lc = 0;
                break;
            }
        }
        if(lc) cout << "Yes" << endl;
    }
}