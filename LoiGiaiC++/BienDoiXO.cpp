#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus

char a[100][100];
bool visited[100][100];
int b[100][100] = {};
int n, m;
pair<int, int> p[4] = {{0, -1}, {-1, 0}, {1, 0}, {0, 1}};

void dfs(int i, int j) {
	if(a[i][j]=='O') {
		visited[i][j] = true;
		b[i][j] = 1;
		for(int k = 0; k < 4; k++) {
			int i1 = i + p[k].first;
			int j1 = j + p[k].second;
			if(visited[i1][j1]==false){
				if(i1>=0&&i1<n && j1>=0&&j1<m && a[i1][j1]=='O') {
					dfs(i1, j1);
				}
			}
		}
		visited[i][j] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		cin >> n >> m;
		memset(visited, false, sizeof(visited));
		memset(b, 0, sizeof(b));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) cin >> a[i][j];
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(i==0||i==n-1||j==0||j==m-1) {
					dfs(i, j);
				}
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				(b[i][j])?cout<<"O":cout<<"X";
				cout << ' ';
			}
			cout << endl;
		}
	}
}

