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
        int d1 = 0, d2 = 0;
        for(int i=2; i<=sqrt(n); i++) {
            if(n%i==0) d2++; 
            while(n%i==0) {
                d1++;
                n/=i;
            }
        }
        if(n!=1) d1++, d2++;
        cout << (d1==3&&d2==3) << endl;
    }
}