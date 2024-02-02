#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

struct ThiSinh {
    string name, ns;
    float a, b, c;
};

void nhap(ThiSinh& a) {
    getline(cin, a.name);
    cin >> a.ns >> a.a >> a.b >> a.c;
}

void in(ThiSinh a) {
    cout << a.name << ' ' << a.ns << ' ';
    cout << fixed << setprecision(1) << a.a + a.b + a.c << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}