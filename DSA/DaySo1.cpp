#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

void display(vector<int> v) {
    cout << '[';
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
        if(i != v.size() - 1) cout << ' ';
    }
    cout << ']';
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[10001] = {};
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> vt(a, a+n);
        display(vt);
        vector<int> vt1;
        while(vt.size()!=1) {
            vt1.clear();
            for(int i = 1; i < vt.size(); i++) {
                vt1.push_back(vt[i] + vt[i-1]);
            }
            vt = vt1;
            display(vt1);
        }
    }
}