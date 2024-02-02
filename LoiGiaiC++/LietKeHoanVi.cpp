#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int a[25] = {}, b[25] = {}, n;

void back_track(int pos) {
    for(int i = 1; i <= n; i++) {
        if(b[i]==0) {
            b[i] = 1;
            a[pos] = i;
            if(pos==n) {
                for(int j = 1; j <= n; j++) cout << a[j];
                cout << ' ';
            }
            else {
                back_track(pos + 1);
            }
            b[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n;
        back_track(1);
        cout << endl;
    }
}