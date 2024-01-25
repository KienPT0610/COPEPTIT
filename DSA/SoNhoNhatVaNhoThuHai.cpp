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
        set<int> st;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        if(st.size() < 2) {
            cout << -1 << endl;
        } else {
            cout << *st.begin() << ' ';
            auto it = st.begin();
            std::advance(it, 1);
            cout << *it << endl;
        }
    }
}