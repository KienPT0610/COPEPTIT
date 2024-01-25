#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

bool nto(int n) {
    if(n<2) return false;
    if(n<4) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5; i<=sqrt(n); i+=6) {
        if(n%i==0||(n%(i+2))==0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int lc = 0;
        for(int i = 2; i <= n/2; i++) {
            if(nto(i) && nto(n-i)) {
                cout << i << ' ' << n - i << endl;
                lc = 1;
                break;
            }
        }
        if(!lc) cout << -1 << endl;
    }
}