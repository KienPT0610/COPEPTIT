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
        int n; cin >> n; int a[n][n];
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < n; j++) cin >> a[i][j];

        int h = 0, c = 0, sum = 0;
        for(int i = 0; i < n; i++) {
            int sh = 0;
            int sc = 0;
            for(int j = 0; j < n; j++) {
                sh+=a[i][j];
                sc+=a[j][i];
                sum+=a[i][j];
            }
            h = max(sh, h);
            c = max(sc, c);
        }
        int s = max(h, c); 
        cout << n*s - sum << endl;
    }
}