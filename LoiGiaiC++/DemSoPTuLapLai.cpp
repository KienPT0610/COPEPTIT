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
        map <int, int> mp;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        for(auto x : mp) if(x.second>1) cnt+=x.second;
        cout << cnt << endl;
    }
}