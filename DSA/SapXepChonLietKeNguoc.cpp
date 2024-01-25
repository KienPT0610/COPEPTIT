#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> vt(n, 0);
    for(auto &x : vt) cin >> x;
    stack<vector<int>> st;
    for(int i = 0; i < n - 1; i++) {
        int idx = i;
        for(int j = i+1; j < n; j++) {
            if(vt[idx] > vt[j]) {
                idx = j;
            }
        }
        swap(vt[idx], vt[i]);
        st.push(vt);
    }
    int step = n - 1;
    while(!st.empty()) {
        cout << "Buoc " << step << ": ";
        for(auto i : st.top()) cout << i << ' ';
        cout << endl;
        st.pop();
        step--; 
    }
}