#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

void TongChuSo(string s) {
    ll sum = 0;
    for(int i = 0; i < s.length(); i++) sum += s[i] - '0';
    if(sum >= 10) {
        TongChuSo(to_string(sum));
    }
    else if(sum == 9) {
        cout << 1 << endl;
    } else cout << 0 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string n; cin >> n;
        TongChuSo(n);
    }
}