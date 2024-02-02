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
        int a[n + 1] = {}, b[n + 1] = {};
        for(int i = 1; i <= n; i++) cin >> a[i], a[i]+=a[i-1];
        for(int i = 1; i <= n; i++) cin >> b[i], b[i]+=b[i-1];
        int m = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= n; j++) {
                if(a[j]-a[i-1]==b[j]-b[i-1]) {
                    m = max(m, j - i + 1);
                }
            }
        }
        cout << m << endl;
        
    }
}