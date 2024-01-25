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
        int a[50] = {}, b[50] = {};
        int t = 0;
        for(int i = 1; i <= k; i++) {
            cin >> a[i];
            if(a[i] < n - k + i) {
                t = i;
            }
        }
        if(t==0) {
            cout << k << endl;
            continue;
        }
        for(int i = 1; i <= k; i++) {
            if(i < t) {
                b[i] = a[i];
            } else if(i == t) {
                b[i] = a[i] + 1;
            } else {
                b[i] = b[i-1] + 1;
            }
        }
        int cnt = 0;
        for(int i = 1; i <= k; i++) {
            if(!binary_search(a + 1, a + k + 1, b[i])) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}