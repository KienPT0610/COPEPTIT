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
        int n; cin >> n;
        int a[n] = {}, b[n] = {};
        for(int &x : a) cin >> x;
        stack<int> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <= a[i]) {
                st.pop();
            }
            if(st.empty()) b[i] = -1;
            else b[i] = st.top();
            st.push(a[i]);
        }
        for(auto x : b) cout << x << ' ';
        cout << endl;
    }
}