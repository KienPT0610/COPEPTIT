#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int x;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n >> x;
        int a[n];
        multimap<int, int> mp;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            mp.insert({abs(x-a), a});
        }
        for(auto x : mp) {
            cout << x.second << ' ';
        }
        cout << endl;
    }
}