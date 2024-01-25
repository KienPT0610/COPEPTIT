#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a[10001] = {};
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x; cin >> x;
    for(int i = 0; i < n; i++) {
        if(a[i]==x) continue;
        else cout << a[i] << ' ';
    }
}