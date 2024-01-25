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
        for(int i = s.length() - 1; i >= 0; i--) {
            if(s[i]=='1') {
                s[i] = '0';
            } else {
                s[i] = '1';
                break;
            }
        }
        cout << s << endl;
    }
}   