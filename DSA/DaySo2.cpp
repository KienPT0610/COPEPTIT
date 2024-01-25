#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

void display(vector<int> v) {
    cout << '[';
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
        if(i != v.size() - 1) cout << " ";
    }
    cout << ']';
    cout << ' ';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[10001] = {};
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> vt(a, a+n);
        vector<int> vt1;
        stack<vector<int>> st;
        st.push(vt);
        while(vt.size()!=1) {
            for(int i = 0; i < vt.size() - 1; i++) {
                vt1.push_back(vt[i] + vt[i+1]);
            }
            st.push(vt1);
            vt = vt1;
            vt1.clear();
        }
        while(!st.empty()) {
            display(st.top());
            st.pop();
        }
        cout << endl;
    }
}