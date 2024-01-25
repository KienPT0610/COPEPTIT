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
        queue<ll> q;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            q.push(x);
        }
        ll s = -1;
        for(int i = 0; i < n - 1; i++) {
            ll x; cin >> x;
            if(x==q.front()) {
                q.pop();
            }
            else if(x!=q.front()&&s==-1) {
                s = i;
            } 
        }
        cout << s+1 << endl;
    }
}