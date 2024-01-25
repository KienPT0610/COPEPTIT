#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, a[101][101] = {};
int lc = 0;
pair<int, int> p[2] = {{1, 0}, {0, 1}};
char x[2] = {'D', 'R'};
string s = "";

void dfs(int i, int j) {
    for(int k = 0; k < 2; k++) {
        int i1 = i + p[k].first;
        int j1 = j + p[k].second;
        if(i1<n && j1<n && a[i1][j1]) {
            s += x[k];
            if(i1==n-1&&j1==n-1) {
                cout << s << ' ';
                lc = 1;
            }
            else dfs(i1, j1);
            s.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) cin >> a[i][j];
        }
        if(a[0][0] == 0 || a[n-1][n-1]==0) {
            cout << -1 << endl;
            continue;
        }
        dfs(0, 0);
        if(!lc) cout << -1;
        lc = 0;
        cout << endl;
    }
}