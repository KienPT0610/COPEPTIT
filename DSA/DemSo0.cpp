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
        int lc = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x==1) lc++;
        }
        cout << n - lc << endl;
    }
}