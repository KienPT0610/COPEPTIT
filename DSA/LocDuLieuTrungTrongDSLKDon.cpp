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
    map <int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    for(int i = 0; i < n; i++) {
        if(mp[a[i]]) {
            cout << a[i] << ' ';
            mp[a[i]] = 0;
        }
    }
}
    