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
        int n; cin >> n; int a[n] = {};
        for(auto &x:a) cin >> x;
        int m = INT_MAX;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(abs(a[i] + a[j]) < abs(m)) {
                    m = a[i] + a[j];
                }
            }
        }
        cout << m << endl;
    }
}