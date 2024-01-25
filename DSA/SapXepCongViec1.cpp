#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second==b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i].first;
        }
        for(int i = 0; i < n; i++) {
            cin >> a[i].second;
        }
        sort(a.begin(), a.end(), cmp);
        int cnt = 1, now = a[0].second;
        for(int i = 1; i < n; i++) {
            if(now <= a[i].first) {
                cnt++;
                now = a[i].second;
            }
        }
        cout << cnt << endl;
    }
}