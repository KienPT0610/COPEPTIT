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
        int a[n];
        for(int i=0; i < n; i++) cin >> a[i];
        int in[n] = {};
        int cnt = 0;
        sort(a, a + n);
        for(int i = 0; i < n; i+=2) {
            in[i] = a[cnt++];
        }
        for(int i = 1; i < n; i+=2) {
            in[i] = a[cnt++];
        }
        for(int i = 0; i < n; i++) {
            cout << in[i] << ' ';
        }
        cout << endl;
    }
}