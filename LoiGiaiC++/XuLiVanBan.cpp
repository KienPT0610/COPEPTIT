#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    string s;
    vector<string> vt;
    while(cin >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vt.push_back(s);
    }
    bool ok = 0;
    for(auto it : vt) {
        if(!ok) {
            it[0] = toupper(it[0]);
            cout << it << ' ';
            ok = 1;
        }
        else {
            char x = it[it.size() - 1]; 
            if(x == '.' || x == '?' || x == '!') {
                ok = 0;
                it.pop_back();
                cout << it << endl;
            }
            else cout << it << ' ';
        }
    }
}