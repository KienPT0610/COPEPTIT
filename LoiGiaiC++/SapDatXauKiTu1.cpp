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
        string s; cin >> s;
        map<char, int> mp;
        for(int i = 0; i < s.length(); i++) mp[s[i]]++;
        int m = s.length()/2 + (s.size()%2==0?0:1);
        int lc = 1;
        for(auto x : mp) {
            if(x.second>m) {
                lc = 0; break;
            }
        }
        cout << lc << endl;
    }
}