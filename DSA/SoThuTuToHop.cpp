#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, k;
int a[100001] = {};
int c[100001] = {};
int cnt = 0;
bool check = false;

void display() {
    cnt++;
    for(int i = 1; i <= k; i++) {
        if(a[i]!=c[i]) return;
    }
    check = true;
}

void backtrack(int pos) {
    if(check) return;
    for(int i = a[pos - 1] + 1; i <= n - k + pos; i++) {
        a[pos] = i;
        if(pos==k) display();
        else backtrack(pos+1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++) cin >> c[i];
        backtrack(1);
        cout << cnt << endl;
        check = false; cnt = 0;
    }   
}