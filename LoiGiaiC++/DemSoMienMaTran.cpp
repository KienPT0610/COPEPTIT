#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, m;
int a[105][105] = {};
pair<int, int> p[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

void dfs(int i, int j) {
    a[i][j] = 0;
    for(int k = 0; k < 8; k++) {
        int i1 = i + p[k].first;
        int j1 = j + p[k].second;
        if(i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1]){
            dfs(i1, j1);
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
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(a[i][j]) {
                    cnt++;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
}