#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, m, a[101][101] = {}, cnt = 0;

pair<int, int> p[2] = {{1, 0}, {0, 1}};

void dfs(int i, int j) {
    for(int k = 0; k < 2; k++) {
        int i1 = i + p[k].first;
        int j1 = j + p[k].second;
        if(i1<n && j1<m) {
            if(i1==n-1&&j1==m-1) {
               cnt++;
            }
            else dfs(i1, j1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }
        dfs(0, 0);
        cout << cnt << endl;
        cnt = 0;
    }
}