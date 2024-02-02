#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n, b, k; cin >> n >> k >> b;
    int a[n + 1] = {};
    for(int i = 0; i < b; i++) {
        int x; cin >> x;
        a[x] = 1;
    }   
    int m = 0;    
    for(int i = 1; i <= k; i++) {
        m += a[i];
    }
    int M = m;
    for(int i = k + 1; i <= n; i++) {
        m += a[i];
        m -= a[i - k];
        M = min(M, m);
    }
    cout << M << endl;
}