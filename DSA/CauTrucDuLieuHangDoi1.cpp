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
        deque<int> q;
        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            if(x==1) {
                cout << q.size() << endl;
            } else if(x == 2) {
                (!q.empty())?cout<<"YES":cout<<"NO";
                cout << endl;
            } else if(x == 3) {
                int a; cin >> a;
                q.push_back(a);
            } else if(x == 4) {
                if(!q.empty()) q.pop_front();
            } else if(x == 5) {
                (q.empty())?cout << -1 : cout << q.front();
                cout << endl;
            } else if(x == 6) {
                (q.empty())?cout << -1 : cout << q.back();
                cout << endl;
            }
        }
        cout << endl;
    }
}