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
        int a[n]; 
        for(auto &i : a) cin >> i;
        int l[n] = {}, r[n] = {};
        l[0] = 1, r[n-1] = 1;
        for(int i = 1; i < n; i++) {
            l[i] = 1;
            if(a[i] >= a[i-1]) l[i] = l[i-1] + 1;
        }
        for(int i = n-2; i >= 0; i--) {
            r[i] = 1;
            if(a[i] >= a[i+1]) r[i] = r[i+1]+1;
        }
        int m = 0;
        for(int i = 0; i < n; i++) {
            m = max(m, l[i] + r[i] - 1);
        }
        cout << m << endl;
    }
}