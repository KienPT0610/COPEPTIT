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
        string a, b; cin >> a >> b;
        map<char, int> mp;
        for(auto x : a) {
            mp[x]++;
        }
        int cnt = 0;
        for(auto x : b) {
            if(mp[x]>0) {
                cnt++;
                mp[x]--;
            }
        }
        cout << cnt << endl;
    }
}