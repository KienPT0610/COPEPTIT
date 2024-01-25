#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n = 0;
int a[1001] = {};

void display() {
    for(int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

void backtrack(int l, int r) {
    for(int i = 0; i <= 1; i++) {
        a[l] = a[r] = i;
        if(l < r - 1) {
            backtrack(l+1, r-1);
        } else {
            display();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    backtrack(1, n);
}