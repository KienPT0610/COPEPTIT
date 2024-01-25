#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, k, a[101] = {};

void solve() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i]==1) cnt++;
    }
    if(cnt == k) {
        for(int i = 1; i <= n; i++) {
           cout << a[i];
        }
        cout << endl;
    }
}

void backtrack(int pos) {
    for(int i = 0; i <= 1; i++) {
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
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        backtrack(1);
    }
}