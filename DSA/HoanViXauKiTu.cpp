#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int c[101] = {}, b[101] = {};

void display(string s) {
    for(int i = 0; i < s.length(); i++) {
        cout << s[b[i]];
    }
    cout << ' ';
}

void backtrack(int pos, string s) {
    for(int i = 0; i < s.length(); i++) {
        if(!c[i]) {
            c[i] = 1;
            b[pos] = i;
            if(pos==s.length()-1) {
                display(s);
            } else {
                backtrack(pos+1, s);
            }
            c[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        backtrack(0, s);
        cout << endl;
    }
}