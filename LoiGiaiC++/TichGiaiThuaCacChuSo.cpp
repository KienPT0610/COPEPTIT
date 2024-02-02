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
        int n; cin >> n; string s; cin >> s;
        int a[10] = {};
        for(auto x : s) {
            if(x == '2') a[2]++;
            if(x == '3') a[3]++;
            if(x == '4') a[3]++, a[2]+=2;
            if(x == '5') a[5]++;
            if(x == '6') a[5]++, a[3]++;
            if(x == '7') a[7]++;
            if(x == '8') a[7]++, a[2]+=3;
            if(x == '9') a[7]++, a[3]+=2, a[2]++; 
        }
        for(int i = 9; i >= 2; i--){
            for(int j = 1; j <= a[i]; j++) {
                cout << i;
            }
        }
        cout << endl;
    }
}