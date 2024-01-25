#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int a[1001] = {};
int n;
bool visited[100] = {};

void display() {
    for(int i = 2; i <= n; i++) {
        if(abs(a[i]-a[i-1])==1) return;
    }
    for(int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void backtrack(int pos) {
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            visited[i] = true;
            a[pos] = i;
            if(pos==n) {
                display();
            } else {
                backtrack(pos+1);
            }
            visited[i] = false;
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