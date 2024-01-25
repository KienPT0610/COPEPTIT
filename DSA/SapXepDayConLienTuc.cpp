#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int a[1000006] = {};
int b[1000006] = {};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
        sort(a, a + n);
        int l, r;
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                l = i;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) {
            if(a[i] != b[i]) {
                r = i;
                break;
            }
        }
        cout << l + 1 << ' ' << r + 1 << endl;
    }
}