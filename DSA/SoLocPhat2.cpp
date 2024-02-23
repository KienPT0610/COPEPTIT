#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

void solve(int n) {
    deque<string> dq;
    dq.push_back("6"); dq.push_back("8");
    vector<string> vt;
    vt.push_back("6"); vt.push_back("8");
    while(dq.front().size()!=n){
        string s = dq.front();
        dq.push_back(s + "6"); dq.push_back(s + "8");
        dq.pop_front();
        vt.push_back(s + "6"); vt.push_back(s + "8");
    }   
    cout << vt.size() << endl;
    for(int i = 0; i < vt.size(); i++) {
        cout << vt[i] << ' ';
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        solve(n);
    }
}