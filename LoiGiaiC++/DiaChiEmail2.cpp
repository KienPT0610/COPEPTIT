#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; cin.ignore();
    map<string, int> mp;
    while(t--){
        string s; getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        stringstream ss(s); string tmp;
        vector<string> vt;
        while(ss >> tmp) {
            vt.push_back(tmp);
        }
        string res = vt[vt.size() - 1];
        for(int i = 0; i < vt.size() - 1; i++) {
            res += vt[i][0];
        }
        mp[res]++;
        if(mp[res]>1) res += mp[res] + '0';
        res += "@ptit.edu.vn";
        cout << res << endl;
    }
}
