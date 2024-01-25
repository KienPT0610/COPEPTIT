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
        int a[10001] = {};
        for(int i = 0; i < n; i++) cin >> a[i];
        int lc = 0;
        for(int i = n - 1; i >= 0; i--) {
            if(a[i] < a[i + 1]) {
                int m = INT_MAX;
                int x = 0;
                for(int j = i + 1; j < n; j++) {
                    if(a[j] > a[i] && m > a[j]) {
                        m = a[j];
                        x = j;
                    }
                }
                swap(a[x], a[i]);
                int l = i + 1, r = n - 1;
                while(l <= r) {
                    swap(a[l], a[r]);
                    l++; r--;
                }
                lc = 1;
                break;
            }
        }
        if(lc) {
            for(int i = 0; i < n; i++) {
                cout << a[i] << ' ';
            }
        } else {
            for(int i = 1; i <= n; i++) cout << i << ' ';
        }
        cout << endl;
    }
}