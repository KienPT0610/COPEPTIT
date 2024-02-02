#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n, k;
int a[25] = {};

void back_track(int pos) {
    for(int i = a[pos - 1] + 1; i <= n - k + pos; i++) {
        a[pos] = i;
        if(pos == k) {
            for(int j = 1; j <= k; j++) cout << a[j];
            cout << ' ';
        } 
        else {
            back_track(pos + 1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        back_track(1);
        cout << endl;
    }
}