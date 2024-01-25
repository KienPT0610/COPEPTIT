#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

ll fb[100] = {};

void fibo() {
    fb[0] = 0;
    fb[1] = 1;
    for(int i = 2; i <= 94; i++) {
        fb[i] = fb[i-1] + fb[i-2];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    fibo();
    while(t--){
        int n, k; cin >> n >> k;
        cout << fb[n] << endl;
    }
}