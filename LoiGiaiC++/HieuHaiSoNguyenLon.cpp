#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

void solve(string a, string b) {
    if(a.length() < b.length()) {
        a.insert(0, b.length() - a.length(), '0');
    } else {
        b.insert(0, a.length() - b.length(), '0');
    }
    if(a < b) swap(a, b);
    int tmp = 0, nho = 0;
    string res = "";
    for(int i = a.length() - 1; i >= 0; i--) {
        tmp = (a[i] - '0') - (b[i] - '0') - nho;
        if(tmp < 0) {
            tmp += 10;
            nho = 1;
        }
        else nho = 0;
        res.insert(0, 1, tmp + '0');
    }
    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string a, b; cin >> a >> b;
        solve(a, b);
    }
}