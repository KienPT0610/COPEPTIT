#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

bool ChiaHet(string s, int n) {
    int du = 0;
    for(int i = 0; i < s.length(); i++) {
        du = du*10 + (s[i]-'0');
        du%=n;
    }
    if(du==0) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        deque<string> dq;
        dq.push_back("9");
        while(1) {
            string s = dq.front();
            if(ChiaHet(s, n)) break;
            dq.pop_front();
            dq.push_back(s + "0"); dq.push_back(s + "9");
            
        }
        cout << dq.front() << endl;
        // cout << ChiaHet("9009", 7);
    }
}