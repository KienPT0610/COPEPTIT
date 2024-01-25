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
        multiset<ll> st;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            st.insert(x);
        }
        ll s = 0;
        while(st.size() != 1) {
            ll x = *st.begin(); st.erase(st.begin());
            ll y = *st.begin(); st.erase(st.begin());
            st.insert(x+y);
            s += x + y;
        }
        cout << s << endl;
    }
}