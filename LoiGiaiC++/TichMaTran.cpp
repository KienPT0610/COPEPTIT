#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//
 
void nhap(int a[101][101], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, p; cin >> n >> m >> p;
    int a[101][101] = {}, b[101][101] = {}, c[101][101] = {};
    nhap(a, n, m); nhap(b, m, p);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}