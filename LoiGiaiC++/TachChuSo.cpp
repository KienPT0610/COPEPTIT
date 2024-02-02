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
        ll sum = 0; multiset<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(isalpha(s[i])) {
                st.insert(s[i]);
            } else {
                sum += s[i] - '0';
            }
        }
        for(auto x : st) cout << x;
        cout << sum << endl;
    }
}