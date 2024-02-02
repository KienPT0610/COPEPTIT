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
        int n; cin >> n; int a[n];
        for(int &x:a) cin >> x;
        int m=0;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++)
                if(a[j] > a[i])
                    m = max(m, a[j] - a[i]);
        }
        (m==0)?cout<<"-1\n":cout<<m<<endl;
    }
}