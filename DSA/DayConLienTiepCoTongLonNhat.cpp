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
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int s = 0;
        int S = INT_MIN;
        for(int i = 0; i < n; i++) {
            s = max(s + a[i], a[i]);
            S = max(s, S);
        }
        cout << S << endl;
    }
}