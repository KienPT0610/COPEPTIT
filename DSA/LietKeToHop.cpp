#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, k, a[10001] = {}, b[10001] = {};

void display() {
    for(int i = 1; i <= k; i++) {
        cout << a[b[i]] << ' ';
    }
    cout << endl;
}

void backtrack(int pos, int idx) {
    for(int i = b[pos-1]+1; i <= idx - k + pos; i++) {
        b[pos] = i;
        if(pos==k) {
            display();
        } else {
            backtrack(pos+1, idx);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    set<int> st;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        st.insert(x);
    }
    int idx = 1;
    for(auto x : st) {
        a[idx] = x;
        idx++;
    }
    backtrack(1, idx-1);

}