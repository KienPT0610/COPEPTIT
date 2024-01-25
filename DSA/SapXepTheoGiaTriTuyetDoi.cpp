#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int x = 0;
vector<pair<int, int>> a;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(abs(a.first-x)==abs(b.first-x)) return a.second < b.second;
    return abs(a.first - x) < abs(b.first - x);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n >> x;
        a.resize(n);
        for(int i = 0; i < n; i++) { 
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end(), cmp);
        for(int i = 0; i < n; i++) cout << a[i].first <<  ' ';
        cout << endl;
    }
}