#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int k;
char x;

char a[1001] = {};

void backtrack(int pos) {
    for(char i = a[pos-1]; i <= x ; i++) {
        a[pos] = i;
        if(pos==k) {
            for(int j = 1; j <= k; j++) cout << a[j];
            cout << endl;
        } else {
            backtrack(pos+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> x >> k;
    a[0] = char(65);
    backtrack(1);
    
}