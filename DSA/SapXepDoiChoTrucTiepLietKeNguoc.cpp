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
        vector<int> vt(n, 0);
        stack<vector<int>> st;
        for(auto &x : vt) cin >> x;
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(vt[i] > vt[j]) swap(vt[i], vt[j]);
            }
            st.push(vt);
        }
        int step = n - 1;
        while(!st.empty()) {
            cout << "Buoc " << step << ": ";
            for(auto x : st.top()) {
                cout << x << ' ';
            } 
            cout << endl;
            st.pop(); step--;
        }
    }
}