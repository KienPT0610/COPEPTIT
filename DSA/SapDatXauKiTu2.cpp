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
        string s; cin >> s;
        map<char, int> mp;
        int m = 0;
        for(auto x : s) mp[x]++, m = max(m, mp[x]);
        if(m <= ceil((float)s.length()/n)) cout << 1;
        else cout << -1;
        cout << endl;
    }
}