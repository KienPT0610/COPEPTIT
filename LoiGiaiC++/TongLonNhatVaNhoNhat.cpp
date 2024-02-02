#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

ll maxsum(ll s1, ll s2) {
    string a = to_string(s1);
    string b = to_string(s2);
    for(int i = 0; i < a.length(); i++) {
        if(a[i]=='5') a[i] = '6';
    }
    for(int i = 0; i < b.length(); i++) {
        if(b[i]=='5') b[i] = '6';
    }
    s1 = stoll(a); s2 = stoll(b);
    return s1 + s2;
}

ll minsum(ll s1, ll s2) {
    string a = to_string(s1);
    string b = to_string(s2);
    for(int i = 0; i < a.length(); i++) {
        if(a[i]=='6') a[i] = '5';
    }
    for(int i = 0; i < b.length(); i++) {
        if(b[i]=='6') b[i] = '5';
    }
    s1 = stoll(a); s2 = stoll(b);
    return s1 + s2;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll s1, s2; cin >> s1 >> s2;
        cout << minsum(s1, s2) << ' ' << maxsum(s1, s2) << endl;
    }
}