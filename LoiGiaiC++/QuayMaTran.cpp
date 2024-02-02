#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n][m] = {};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }
        int h1=0, h2=n-1, c1=0, c2=m-1;
        while(h1<=h2&&c1<=c2){
            int tmp = a[h1][c1];
            for(int i = c1; i <= c2; i++) {
                int x = a[h1][i];
                a[h1][i] = tmp;
                tmp = x;
            }   
            for(int i = h1+1; i <= h2; i++) {
                int x = a[i][c2];
                a[i][c2] = tmp;
                tmp = x;
            } 
            for(int j = c2-1; j >= c1; j--) {
                int x = a[h2][j];
                a[h2][j] = tmp;
                tmp = x;
            }        
            for(int i = h2-1; i >= h1; i--) {
                int x = a[i][c1];
                a[i][c1] = tmp;
                tmp = x;
            }
            c1++; h1++; h2--; c2--;
            
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}