#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; 
    stack<int> st;
    while(t--){
        string s; cin >> s;
        if(s == "PUSH") {
            int x; cin >> x;
            st.push(x);
        } else if (s == "POP") {
            if(!st.empty()) {
                st.pop();
            }
        } else if (s == "PRINT") {
            if(!st.empty()) cout << st.top() << endl;
            else cout << "NONE" << endl;
        }
    }
}