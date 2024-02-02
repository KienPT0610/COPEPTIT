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
        int n, k; cin >> n >> k;
        int a[n] = {};
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(k == a[i] + a[j]) cnt++;
            }
        }
        cout << cnt << endl;
    }
}