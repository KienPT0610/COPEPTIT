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
        int a[n] = {};
        for(int &i : a) cin >> i;
        // sort(a, a+n);
        int min = INT_MAX;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(abs(a[i] + a[j]) < abs(min)) {
                    min = a[i] + a[j];
                }
            }
        }
        cout << min << endl;
    }
}