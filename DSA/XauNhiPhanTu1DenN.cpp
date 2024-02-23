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
        int n, cnt = 0; cin >> n;
        queue<string> q;
        q.push("1");
        while(1) {
            string s = q.front();
            cout << q.front() << ' ';
            q.pop(); cnt++;
            if(cnt == n) break;
            q.push(s + "0"); q.push(s + "1");
        }
        cout << endl;
    }
}