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
        int n, s, m; cin >> n >> s >> m;
        if(n < m || 6*n < 7*m) {
            // n < m -> s*n < s*m nên ko thể sống sót
            // 1 tuần chỉ mua được 6 ngày nên 1 tuần số lương thực là 6*n và cần bổ sung 7*m 
            cout << -1;
        } else {
            int sn = ceil((float)m*s/n);
            cout << sn;
        }
        cout << endl;
    }
}