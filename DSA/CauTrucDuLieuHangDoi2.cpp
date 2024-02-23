#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; 
    queue<int> q;
    while(t--){
        string s; cin >> s;
        // cout << s << endl;
        if(s=="PUSH") {
            int x; cin >> x;
            q.push(x);
            // cout << "1" << endl;
        } else if(s=="POP") {
            if(!q.empty()) q.pop();
        } else if(s == "PRINTFRONT") {
            (q.empty())?cout<<"NONE":cout<<q.front();
            cout << endl;
        }
    }
}