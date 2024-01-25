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
        int n, k; cin >> n >> k;
        vector<int> vt(n, 0);
        for(int i = 0; i < n; i++) cin >> vt[i];
        sort(vt.begin(), vt.end(), greater<int>());
        for(int i = 0; i < k; i++) {
            cout << vt[i] << ' ';
        }
        cout << endl;
    }
}