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
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            int k = i;
            for(int j = i + 1; j < n; j++) {
                if(a[j] < a[k]) k = j;
            }
            if(i!=k) {
                cnt++;
                swap(a[k], a[i]);
            }
        }
        cout << cnt << endl;
    }
}