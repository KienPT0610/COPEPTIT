#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

bool check(string ss){
    string s = "";
    int lc = 1;
    for(int i = 6; i < ss.length(); i++) {
        if(ss[i]!='.') s+=ss[i];
    }
    // check tang chat
    for(int i = 0; i < s.length() - 1; i++) {
        if(s[i] >= s[i + 1]) {
            lc = 0;
        }
    }
    if(lc) return 1;
    // check 5 cs deu bang nhau
    for(int i = 0; i < s.length() - 1; i++) if(s[i]!=s[i+1]) lc = 0;
    if(lc) return 1;
    // check 3 dau 2 cuoi 
    if(s[0]!=s[1] || s[1]!=s[2] || s[3]!=s[4]) lc = 0;
    if(lc) return 1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i]!='6' && s[i]!='8') lc = 0;
    }
    if(lc) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        (check(s))?cout<<"YES":cout<<"NO";
        cout << endl;
    }
}