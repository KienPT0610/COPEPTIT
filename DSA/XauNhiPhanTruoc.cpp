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
        int lc = 0;
        for(int i = s.length()-1; i >= 0; i--) {
            if(s[i]=='1') {
                s[i] = '0';
                for(int j = i + 1; j < s.length(); j++) {
                    s[j] = '1';
                }
                lc = 1;
                break;
            }
        }
        if(!lc) {
            string res = "";
            res.insert(0, s.length(), '1');
            cout << res << endl;
        }
        else cout << s << endl;
    }
}