#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

void tower(int n, char a, char b, char c) {
    if(n==1) {
        cout << a << " -> " << c << endl; 
        return;
    }
    tower(n-1, a, c, b);
    tower(1, a, b, c);
    tower(n-1, b, a, c);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    tower(n, 'A', 'B', 'C');
}