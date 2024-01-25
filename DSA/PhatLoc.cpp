#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, a[10001] = {};

void solve() {
    if(a[1]==8 && a[n]==6) {
        string s = "";
        for(int i = 1; i <= n; i++) {
            s += a[i] + '0';
        }
        if(s.find("88")==string::npos) {
            if(s.find("6666")==string::npos) {
                cout << s << endl;
            }
        }
    }
}

void backtrack(int pos) {
    for(int i = 6; i <= 8; i+=2) {
        a[pos] = i;
        if(pos == n) {
            solve();
        } else {
            backtrack(pos+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n; backtrack(1);

}