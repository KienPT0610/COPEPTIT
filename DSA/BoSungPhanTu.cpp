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
        int n, cnt = 0; cin >> n;
        vector<int> vt(n, 0);
        for(int &i : vt) cin >> i;
        sort(vt.begin(), vt.end());
        for(int i = 1; i < n; i++) {
            if(vt[i]!=vt[i-1])
              cnt += vt[i] - vt[i-1] - 1;
        }
        cout << cnt << endl;
    }
}