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
        int a[n] = {};
        for(int &i : a) cin >> i;
        sort(a, a + n);
        int l = 0, r = n - 1;
        while(l <= r) {
            cout << a[r] << ' ';
            r--;
            if(l < r) {
                cout << a[l] << ' ';
                l++;
            }
        }
        cout << endl;
    }
}