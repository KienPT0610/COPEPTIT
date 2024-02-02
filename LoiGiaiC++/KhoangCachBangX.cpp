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
        int n, x; cin >> n >> x;
        int a[n];
        for(int &i:a) cin >> i;
        sort(a, a + n);
        int lc = -1;
        for(int i = 0; i < n; i++) {
            if(binary_search(a, a+n, a[i]-x)) {
                lc=1; break;
            }
        }
        cout << lc << endl;
    }
}