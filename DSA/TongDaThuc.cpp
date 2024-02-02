#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

void solve(string s, map<int, int>& mp) {
    string tmp;
    stringstream ss(s);
    while(ss >> tmp) {
        if(tmp == "+") continue;
        string res1 = "", res2 = "";
        for(int i = 0; i < tmp.length(); i++) {
            if(tmp[i]=='*') break;
            res1 += tmp[i];
        }
        for(int i = tmp.length() - 1; i >= 0; i--) {
            if(tmp[i] == '^') break;
            res2 += tmp[i];
        }
        reverse(res2.begin(), res2.end());
        int x = stoi(res1);
        int mul = stoi(res2);
        mp[mul] += x;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; cin.ignore();
    while(t--){
        string s1; getline(cin, s1); 
        string s2; getline(cin, s2);
        map<int, int> mp;
        solve(s1, mp);
        solve(s2, mp);
        vector<pair<int, int>> vt(mp.begin(), mp.end());
        sort(vt.begin(), vt.end(), cmp);
        int cnt = 0;
        for(auto x : vt) {
            cout << x.second << "*x^" << x.first;
            if(cnt < vt.size() - 1) {
                cout << " + ";
                cnt++;
            }
        }
        cout << endl;
    }
}