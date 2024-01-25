#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n;
char c[2] = {'A', 'H'};
char a[20] = {};

void solve() {
    if(a[1]=='H' && a[n]=='A') {
        string s(a+1, a+n+1);
        if(s.find("HH")==string::npos) {
            cout << s << endl;
        }
    }
}

void backtrack(int pos) {
    for(int i = 0; i <= 1; i++) {
        a[pos] = c[i];
        if(pos==n) {
            solve();
        } else {
            backtrack(pos+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n;
        backtrack(1);
    }   
}