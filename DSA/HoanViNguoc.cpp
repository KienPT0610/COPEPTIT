#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, a[100001] = {}, b[100001] = {};
stack<vector<int>> st;

void display() {
    vector<int> vt;
    for(int i = 1; i <= n; i++) {
        vt.push_back(a[i]);
    }
    st.push(vt);
}

void backtrack(int pos) {
    for(int i = 1; i <= n; i++) {
        if(!b[i]) {
            a[pos] = i;
            b[i] = 1;
            if(pos==n) {
                display();
            } else {
                backtrack(pos+1);
            }
            b[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n;
        backtrack(1);
        while(!st.empty()) {
            for(auto x : st.top()) {
                cout << x;
            }
            cout << ' ';
            st.pop();
        }
        cout << endl;
    }
}  