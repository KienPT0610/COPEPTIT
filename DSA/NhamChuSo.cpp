#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

string minS(string s) {
    string res;
    for(int i = 0; i < s.length(); i++) {
        if(s[i]=='6') s[i] = '5';
        res += s[i];
    }
    return res;
}

string maxS(string s) {
    string res;
    for(int i = 0; i < s.length(); i++) {
        if(s[i]=='5') s[i] = '6';
        res += s[i];
    }
    return res;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    string a, b; cin >> a >> b;
    string a1 = minS(a);
    string a2 = minS(b);
    ll x = stoll(a1);
    ll y = stoll(a2);
    cout << x + y << ' ';
    string x1 = maxS(a);
    string x2 = maxS(b);
    x = stoll(x1);
    y = stoll(x2);
    cout << x + y << endl;
}   