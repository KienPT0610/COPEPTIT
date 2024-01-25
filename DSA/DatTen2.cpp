#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

// A : 65

int n, k;
int a[10001] = {}, b[10001] = {};

void display() {
    for(int i = 1; i <= k; i++) {
        cout << char(a[i] + 64);
    }
    cout << endl;
}

void backtrack(int pos) {
    for(int i = b[pos-1]+1; i <= n - k + pos; i++) {
        a[pos] = i;
        b[pos] = i;
        if(pos==k) {
            display();
        } else {
            backtrack(pos + 1);
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