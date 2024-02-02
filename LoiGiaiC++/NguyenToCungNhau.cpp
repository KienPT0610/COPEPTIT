#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int nto(int n) {
    if(n < 2) return 0;
    if(n < 4) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(int i=5; i<=sqrt(n); i++){
        if(n%i==0 || n%(i+2)==0) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        int cnt = 0;
        for(int i = 1; i <= x; i++) {
            if(__gcd(i, x)==1) cnt++;
        }
        cout << nto(cnt) << endl;
    }
}