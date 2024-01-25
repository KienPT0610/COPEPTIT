#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(auto &i : a) cin >> i;
    for(int i = 0; i < n-1; i++) {
        int idx = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[idx]) {
                idx = j;
            }
        }
        swap(a[i], a[idx]);
        cout << "Buoc " << i + 1 << ": ";
        for(int j = 0; j < n; j++) cout << a[j] << ' ';
        cout << endl;
    }

}