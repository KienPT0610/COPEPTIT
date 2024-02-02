#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

bool check(ll a[5005], ll i, ll x) {
    int l = 0, r = i - 1;
    while(l <= r) {
        if(a[l]+ a[r] == x) return true;
        else if(a[l] + a[r] < x) l++;
        if(a[l] + a[r] > x) r--; 
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n] = {};
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            a[i] = x*x;
        }
        sort(a, a + n);
        int lc = 0;
        for(int i = n-1; i >= 2; i--) {
            if(check(a, i, a[i])) {
                lc = 1;
                break;
            }
        }
        (lc==1)?cout << "YES" : cout << "NO";
        cout << endl;
    }
}