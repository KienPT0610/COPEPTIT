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
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        if(mp[k]==0) {
            cout << -1;
        } else {
            cout << mp[k];
        } 
        cout << endl;
    }
}