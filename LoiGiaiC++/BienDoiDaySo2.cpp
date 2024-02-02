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
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        ll b[n];
        b[0] = a[0] * a[1];
        b[n-1] = a[n-1]*a[n-2];
        for(int i = 1; i < n-1; i++) {
            b[i] = a[i-1]*a[i+1];
        }
        for(int i : b) cout << i << ' ';
        cout << endl;
    }
}