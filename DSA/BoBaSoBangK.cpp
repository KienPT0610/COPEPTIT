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
        int n, s; cin >> n >> s;
        int a[n], lc = 0;
        for(auto &x : a) cin >> x;
        sort(a, a+n);
        for(int i = 0; i < n - 2; i++) {
            for(int j = i + 1; j < n - 1; j++) {
                if(binary_search(a+j+1, a+n, s-a[i]-a[j])) {
                    cout << "YES";
                    lc = 1;
                    break;
                }
            }
            if(lc) break;
        }
        if(!lc) cout << "NO";
        cout << endl;
    }
}