#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int a[10001] = {}, n;
int b[10001] = {}, c[10001] = {};

void display() {
    for(int i = 0; i < n; i++) {
        cout << a[c[i]] << ' ';
    } 
    cout << endl;
}

void backtrack(int pos) {
    for(int i = 0; i < n; i++) {
        if(!b[i]) {
            b[i] = 1;
            c[pos] = i;
            if(pos==n-1) {
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
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    backtrack(0);
}