#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, k, lc = 0;
int a[1001] = {};
vector <int> vt;


void display() {
    cout << '[';
    for(int i = 0; i < vt.size(); i++) {
        cout << vt[i];
        if(i != vt.size() - 1) cout << ' ';
    }
    cout << "] ";
}

void backtrack(int pos, int &s) {
    for(int i = pos; i <= n; i++) {
        s -= a[i];
        vt.push_back(a[i]);
        if(s == 0) {
            display();   
            lc = 1;
        } else if(s > 0) {
            backtrack(i + 1, s);
        }
        s += a[i];
        vt.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a+1, a+n+1);
        backtrack(1, k);
        if(!lc) {
            cout << -1;
        }
        lc = 0;
        cout << endl;
    }
}