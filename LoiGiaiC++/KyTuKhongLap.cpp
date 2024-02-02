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
        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++) {
            if(mp[s[i]]==1) cout << s[i];
        }
        cout << endl;
    }
}