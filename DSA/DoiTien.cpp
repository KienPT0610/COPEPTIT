#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int cnt = 0;
        for(int i = 0; i < 10; i++) {
            while(n >= a[i]) {
                n -= a[i];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}