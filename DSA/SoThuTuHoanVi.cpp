#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, a[100001] = {}, b[100001] = {}, c[100001] = {}, cnt = 0;
bool check = false;
void display() {
    cnt++;
    for(int i = 1; i <= n; i++) {
        if(a[i]!=c[i]) {
            return;
        }
    }
    check = true;
}

void backtrack(int pos) {
    if(check) return;
    for(int i = 1; i <= n; i++) {
        if(!b[i]) {
            a[pos] = i;
            b[i] = 1;
            if(pos==n) {
                display();
            } else {
                backtrack(pos+1);
            }
            b[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> c[i];
        backtrack(1);
        cout << cnt << endl;
        check = false; cnt = 0;
    }
}   