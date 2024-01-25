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
        int n, m, k; cin >> n >> m >> k;
        multiset<int> st;
        for(int i = 0; i < n + m; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        auto it = st.begin();
        std::advance(it, k - 1);
        cout << *it << endl;
    }   
}