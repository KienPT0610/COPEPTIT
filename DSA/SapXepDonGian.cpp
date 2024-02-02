#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a[n + 5] = {}, m = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x] = a[x-1] + 1; 
        m = max(m, a[x]);
    }
    cout << n - m << endl;

}