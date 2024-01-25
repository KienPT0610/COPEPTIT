#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    vector<int> vt;
    while(cin >> s) {
        if(s == "push") {
            int x; cin >> x;
            vt.push_back(x);
        } else if(s == "pop") {
            vt.pop_back();
        } else if(s == "show") {
            if(!vt.empty()) {
                for(auto x : vt) cout << x << ' ';
                cout << endl;
            } else {
                cout << "empty" << endl;
            }
        }
    }
}