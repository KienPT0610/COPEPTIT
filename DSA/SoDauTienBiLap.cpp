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
        int n; cin >> n;
        int a[n], lc = 0;
        map<int, int> mp;
        for(auto &x : a) cin >> x, mp[x]++;
        for(int i = 0; i < n; i++) {
            if(mp[a[i]]>1) {
                cout << a[i]; lc = 1;
                break;
            } 
        }
        if(!lc) cout << "NO";
        cout << endl;
    }
}