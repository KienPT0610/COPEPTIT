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
        set<char> st;
        int lc = 0;
        for(int i = 0; i < s.length(); i++) {
            if(isalpha(s[i]) || s[0] == '0') {
                lc = 1;
                cout << "INVALID" << endl;
                break;
            } else {
                st.insert(s[i]);
            }
        }
        if(!lc) {
            if(st.size()==10) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

    }
}