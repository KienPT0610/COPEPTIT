#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int t, n, k;
set<string> st;
vector<string> a(100), v(100);
int b[10001] = {0};
void backtrack(int pos, int n, int k) {
    // for(int i = 1; i <= n; i++) cout << a[i] << ' ';
    for(int i = b[pos-1] + 1; i <= n - k + pos; i++) {
        // cout << a[i];
        v[pos] = a[i];
        b[pos] = i;
        // cout << v[pos];
        if(pos==k) {
            for(int j = 1; j <= pos; j++) {
                cout << v[j] << ' ';
            }
            cout << endl;
        } else {
            backtrack(pos+1, n, k);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t >> k;
    for(int i = 0; i < t; i++) {
        string x; cin >> x;
        st.insert(x);
    }
    int cnt = 1, n = st.size();
    for(auto x : st) {
        a[cnt] = x;
        cnt++;
    }
    backtrack(1, n, k);
}