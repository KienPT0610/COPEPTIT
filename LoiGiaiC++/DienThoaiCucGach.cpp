#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

char num(char c) {
    if(c >= 'A' && c <= 'C') return '2';
    if(c >= 'D' && c <= 'F') return '3';
    if(c >= 'G' && c <= 'I') return '4';
    if(c >= 'J' && c <= 'L') return '5';
    if(c >= 'M' && c <= 'O') return '6';
    if(c >= 'P' && c <= 'S') return '7';
    if(c >= 'T' && c <= 'V') return '8';
    if(c >= 'W' && c <= 'Z') return '9';
    return '1';
}

bool check(string s) {
    string ss = s;
    reverse(s.begin(), s.end());
    if(ss==s) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        string res = "";
        for(int i = 0; i < s.length(); i++) {
            res += num(s[i]);
        }
        (check(res))?cout<<"YES":cout<<"NO";
        cout << endl;
    }
}