#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, cnt = 0;
int x[101] = {};
bool xuoi[101] = {}, nguoc[101] = {}, a[101] = {};

void backtrack(int pos) {
    for(int j = 1; j <= n; j++) {
        if(!a[j] && !xuoi[pos-j+n] && !nguoc[pos+j-1]) {
            a[j] = true;
            xuoi[pos-j+n] = true;
            nguoc[pos+j-1] = true;
            x[pos] = j;
            if(pos==n) {
                cnt++;
            } else {
                backtrack(pos+1);
            }
            a[j] = false;
            xuoi[pos-j+n] = false;
            nguoc[pos+j-1] = false;
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
        cout << cnt << endl;
        cnt = 0;
        memset(a, sizeof(a), false);
        memset(nguoc, sizeof(nguoc), false);
        memset(xuoi, sizeof(xuoi), false);
    }
}