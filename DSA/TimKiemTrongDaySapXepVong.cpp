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
        multimap<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp.insert({x, i+1});
        }
        for(auto x : mp) {
            // cout << x.first << ' ' << x.second << endl;
            if(x.first==k) {
                cout << x.second << endl;
                break;
            }
        }
    }
}