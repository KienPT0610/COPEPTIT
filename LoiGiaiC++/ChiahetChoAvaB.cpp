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
        int m, n, a, b; cin >> m >> n >> a >> b;
        int d=0;
        for(int i = m; i <= n; i++){
            if(i%a==0 || i%b==0){
                d++;
            }
        }
        cout << d << endl;
    }
}