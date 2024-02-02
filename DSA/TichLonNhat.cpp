#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> vt;
    sort(a, a+n);
    vt.push_back(a[0] * a[1]);
    vt.push_back(a[n-1]*a[n-2]);
    vt.push_back(a[n-1]*a[n-2]*a[n-3]);
    vt.push_back(a[0] * a[1]*a[n-1]);
    sort(vt.begin(), vt.end());
    cout << vt[vt.size()-1] << endl;
}