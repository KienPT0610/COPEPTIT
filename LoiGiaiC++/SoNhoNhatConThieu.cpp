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
        int n; cin >> n; int a[n-1] = {};
        for(int &x : a) cin >> x;
        sort(a, a+n-1); int lc = 0;
        for(int i=0; i<n-2; i++) {
            if(a[i]+1<a[i+1] && lc == 0){
                lc = a[i]+1;
            }
        }
        if(!lc) lc=a[n-2]+1;
        cout << lc << endl;
    }
}