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
        ll n; cin >> n;
        int cnt = 0;
        for(int i = 1; i <= sqrt(n); i++) {
            if(n%i==0) {
                if(i%2==0) cnt++;
                if((n/i)%2==0) cnt++;
            }
        }
        int x = sqrt(n);
        if(x*x==n && x%2==0) cnt--;
        cout << cnt << endl;
    }
}