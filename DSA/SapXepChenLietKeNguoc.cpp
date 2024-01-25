#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> a(n);
    stack<vector<int>> st;
    for(auto &x : a) cin >> x;
    st.push(a);
    for(int i = 1; i < n; i++) {
        int j = i - 1;
        int idx = a[i];
        while(j >= 0 && a[j] > idx) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = idx;
        st.push(a);
    }
    int step = n - 1;
    while(!st.empty()) {
        cout << "Buoc " << step << ": ";
        for(int i = 0; i < st.top().size() - n + step + 1; i++) {
            cout << st.top()[i] << ' ';
        }
        cout << endl;
        st.pop(); step--;
    }
}