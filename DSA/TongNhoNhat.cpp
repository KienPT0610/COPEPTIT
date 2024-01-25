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
        ll a[n] = {};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        ll s1 = 0, s2 = 0;
        for(int i = 0; i < n; i++) {
            if(i%2==0) {
                s1 = a[i] + s1*10;
            } else {
                s2 = a[i] + s2*10;
            }
        }       
        cout << s1 + s2 << endl;
    }
}