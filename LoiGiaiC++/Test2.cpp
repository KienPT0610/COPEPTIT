#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        map<int, int> mp;
        string a= "";
        while(ss>>tmp) {
            if(tmp != "+") {
                mp[tmp[3] - '0'] += tmp[0] - '0';
                // a += tmp + ' ';
            }
        }
        int i = 0;
        for(auto x : mp) {
            // res += x.second + '0' + "x^" + x.first + '0' + '+';
            cout << x.second << "x^" << x.first;
            if(i < mp.size() - 1) {
                cout << " + "; i++;
            }
        }
        cout << endl;
    }
}