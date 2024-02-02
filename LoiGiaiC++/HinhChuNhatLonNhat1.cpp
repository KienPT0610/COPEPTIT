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
        int n, m; cin >> n >> m;
        int a[n + 1][m + 1] = {};
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                cin >> a[i][j];
                if(a[i][j]) a[i][j] += a[i-1][j];
            }
        }
        int s = 0;
        for(int i = 1; i <= n; i++) {
            vector<int> vt(a[i] + 1, a[i] + m + 1);
            sort(vt.begin(), vt.end());
            for(int j = 0; j < vt.size(); j++){
                s = max(s, vt[j]*(m - j ));
            }
        }   
        cout << s << endl;
    }
}