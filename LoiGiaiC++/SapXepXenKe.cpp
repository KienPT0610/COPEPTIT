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
        for(int &x : a) cin >> x;
        sort(a, a+n);
        for(int i = 0; i < n; i++) {
            if(i%2==0) {
                cout << a[n - 1 - i/2] << ' ';
            } else {
                cout << a[i/2] << ' ';
            }
        }
        cout << endl;
    }
}