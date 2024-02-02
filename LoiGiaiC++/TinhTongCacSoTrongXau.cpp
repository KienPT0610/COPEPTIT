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
        ll sum = 0;
        string res = "0";
        for(int i = 0; i < s.length(); i++) {
            if(isdigit(s[i])) {
                res += s[i];
            } else {
                ll a = stoll(res);
                sum += a;
                res = "0";
            }
        }
        if(res!="0") sum += stoll(res);
        cout << sum << endl;
    }
}