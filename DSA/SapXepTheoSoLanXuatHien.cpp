#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second==b.second) {
        return a.first < b.first;
    } 
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;            
        }
        vector<pair<int,int>> vt(mp.begin(), mp.end());
        sort(vt.begin(), vt.end(), cmp);
        // for(auto x : vt) {
        //     cout << x.first << ' ' << x.second << endl;
        // }     
        for(auto x : vt) {
            for(int i = 0; i < x.second; i++)
                cout << x.first << ' ';
        } 
        cout << endl;  
    }
}