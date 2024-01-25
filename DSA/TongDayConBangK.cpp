#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, k, cnt = 0;
int a[1001] = {};
vector <int> vt;
stack <vector<int>> v;

void backtrack(int pos, int &s) {
    for(int i = pos; i <= n; i++) {
        s -= a[i];
        vt.push_back(a[i]);
        if(s == 0) {
            v.push(vt);
            cnt ++;
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
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    backtrack(1, k);
    while(!v.empty()) {
        for(auto x : v.top()) {
            cout << x << ' ';
        }
        cout << endl;
        v.pop();
    }
    cout << cnt;
}