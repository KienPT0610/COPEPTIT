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
        int n, k; cin >> n >> k;
        int a[n] = {};
        for(int i = 0; i < n; i++) cin >> a[i];
        deque<int> dq;
        for(int i = 0; i < n; i++) {
            if(dq.front() == i - k) dq.pop_front();
            while(!dq.empty() && a[dq.back()] <= a[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
            if(i + 1 >= k) cout << a[dq.front()] << ' ';
        }
        cout << endl;
    }
}