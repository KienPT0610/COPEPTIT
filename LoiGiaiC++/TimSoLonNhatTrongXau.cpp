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
        string s, res = "0"; cin >> s;
        s += 'a';
        vector<ll> vt;
        for(int i = 0; i < s.length(); i++) {
            if(isdigit(s[i])) {
                res += s[i];
            } else {
                vt.push_back(stoll(res));
                res = "0";
            }
        }
        sort(vt.begin(), vt.end());
        cout << *vt.rbegin() << endl;
    }
}