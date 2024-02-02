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
        int k, cnt = 0; cin >> k;
        for(int i = 0; i < s.length(); i++) {
            set<char> st;
            for(int j = i; j < s.length(); j++) {
                st.insert(s[j]);
                if(st.size() > k) break;
                else if(st.size() == k) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}