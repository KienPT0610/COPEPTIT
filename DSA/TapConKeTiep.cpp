#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, k;
int a[10001] = {};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < k; i++) {
            cin >> a[i];
        }
        int lc = 0;
        for(int i = k - 1; i >= 0; i--) {
            if(a[i] < n - k + i + 1) {
                a[i]++; 
                for(int j = i + 1; j < k; j++) {
                    a[j] = a[j - 1] + 1;
                }
                lc = 1;
                break;
            }      
        }
        if(lc) {
            for(int i = 0; i < k; i++) {
                cout << a[i] << ' ';
            }
        } else {
            for(int i = 0; i < k; i++) {
                cout << i + 1 << ' ';
            }
        }
        cout << endl;
    }
}