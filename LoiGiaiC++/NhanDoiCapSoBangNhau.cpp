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
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n-1; i++) {
            if(a[i]==a[i+1]) {
                a[i] += a[i+1];
                a[i+1]=0;
            }
        }
        for(int i = 0; i < n; i++) {
            if(a[i]!=0) cout << a[i] << ' ';
        }
        for(int i = 0; i < n; i++) {
            if(a[i]==0) cout << a[i] << ' ';
        }
        cout << endl;
    }
}