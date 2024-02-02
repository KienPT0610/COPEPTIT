#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n;
int a[20] = {};

void display(){
    for(int i = 1; i<=n; i++) {
        cout << a[i];
    }
    cout << ' ';
}

void bacl_track(int pos) {
    for(int i = 0; i <= 1; i++) {
        a[pos] = i;
        if(pos==n) display();
        else bacl_track(pos+1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n;
        bacl_track(1);
        cout << endl;
    }
}