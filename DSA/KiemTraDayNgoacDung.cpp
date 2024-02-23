#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i]=='(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else if(s[i] == ')' && !st.empty()) {
                if(st.top() == '(') st.pop();
            } else if(s[i] == ']' && !st.empty()) {
                if(st.top() == '[') st.pop();
            } else if(s[i] == '}' && !st.empty()) {
                if(st.top() == '{') st.pop();
            }
        }
        (st.empty())?cout<<"YES":cout<<"NO";
        cout << endl;
    }
}