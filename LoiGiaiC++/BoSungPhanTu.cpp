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
        int n; cin >> n; int a[n];
        for(auto &x:a) cin >> x;
        sort(a, a+n);
        int cnt = 0;
        for(int i = 0; i < n - 1; i++) {
            if(a[i]!=a[i+1])cnt+=a[i+1]-a[i]-1;
        }
        cout << cnt << endl;
    }
}