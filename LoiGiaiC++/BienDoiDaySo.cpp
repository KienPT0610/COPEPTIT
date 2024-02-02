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
        for(int &i:a) cin >> i;
        int l = 0, r = n - 1;
        int cnt = 0;
        while(l <= r) {
            if(a[l] < a[r]) {
                l++; cnt++;
                a[l] += a[l-1];
            } 
            if(a[l] > a[r]) {
                r--; cnt++;
                a[r] += a[r+1];
            }
            if(a[l]==a[r]) {
                l++; r--;
            }
        }
        cout << cnt << endl;
    }
}