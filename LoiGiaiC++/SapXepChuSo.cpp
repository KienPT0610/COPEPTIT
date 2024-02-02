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
            while(x!=0) {st.insert(x%10); x/=10;};
        }
        for(auto x : st) cout << x << ' ';
        cout << endl;
    }
}