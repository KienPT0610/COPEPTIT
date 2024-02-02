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
        int n, k, x; cin >> n;
        vector<int> a(n, 0);
        for(int &i:a) cin >> i;
        sort(a.begin(), a.end());
        cin >> k >> x;
        int i = lower_bound(a.begin(), a.end(), x)-a.begin(), j = i;
        for(int z = i - k/2; z < i; z++) {
            cout << a[z] << ' ';
        }
        if(a[j]==x) j++;
        for(int it = j; it < j + k/2; it++) {
            cout << a[it] << ' ';
        }
        cout << endl;
    }
}