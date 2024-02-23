#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    deque<int> dq;
    while(t--){
        string s; cin >> s;
        if(s=="PUSHBACK") {
            int x; cin >> x;
            dq.push_back(x);
        } else if(s=="PUSHFRONT") {
            int x; cin >> x;
            dq.push_front(x);
        } else if(s=="PRINTBACK") {
            if(dq.empty()) cout << "NONE";
            else cout << dq.back();
            cout << endl;
        } else if(s=="PRINTFRONT") {
            if(dq.empty()) cout << "NONE";
            else cout << dq.front();
            cout << endl;
        } else if(s=="POPFRONT") {
            if(!dq.empty()) dq.pop_front();
        } else if(s=="POPBACK") {
            if(!dq.empty()) dq.pop_back();
        }
    }
}