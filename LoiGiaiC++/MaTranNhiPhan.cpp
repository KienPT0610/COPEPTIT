#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int c = 0, l = 0;
        for(int j = 0; j < 3; j++) {
            int x; cin >> x;
            if(x==1) l++;
            else c++;
        }
        if(l>c) cnt++;
    }
    cout << cnt << endl;
}