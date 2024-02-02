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
        int n; cin >> n; int a[n + 1] = {}; 
        string s = "";
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            if(a[i] >= a[i-1]) s+="1";
            else s+= "0";
        }
        // cout << s << endl;
        int l, r; cin >> l >> r;
        string res = s.substr(l, r-l+1);
        // cout << res << endl;
        if(res.find("01")!=-1) cout << "No\n";
        else cout << "Yes\n";
    }
}