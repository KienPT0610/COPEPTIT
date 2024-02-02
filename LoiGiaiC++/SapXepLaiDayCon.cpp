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
        int n; cin >> n; int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int l = 0, r = n - 1;
        while(a[l]==b[l] || a[r]==b[r]) {
            if(a[l] == b[l]) l++;
            if(a[r] == b[r]) r--;
        }
        cout << l + 1<< ' ' << r + 1 << endl;
    }
}