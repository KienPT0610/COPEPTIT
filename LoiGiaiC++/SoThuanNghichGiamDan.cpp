#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

struct cmp {
    bool operator() (const string& a, const string& b) const{
        if(a.length()==b.length()) return a > b;
        return a.length() > b.length();
    }
};

bool check(string s) {
    if(s.length() == 1) return false;
    string res = s;
    reverse(s.begin(), s.end());
    return res == s;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    map<string, int, cmp> mp;
    while(cin >> s) {
        if(check(s)) mp[s]++;
    }

    for(auto x : mp) {
        cout << x.first << ' ' << x.second << endl; 
    }

}