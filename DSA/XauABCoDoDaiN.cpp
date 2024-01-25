#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

char c[2] = {'A', 'B'};
char a[10001] = {};
int n;

void display() {
    for(int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << ' ';
}

void backtrack(int pos) {
    for(int i = 0; i <= 1; i++) {
        a[pos] = c[i];
        if(pos==n-1) {
            display();
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
        backtrack(0);
        cout << endl;
    }
}