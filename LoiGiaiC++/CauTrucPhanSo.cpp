#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

struct PhanSo{
    ll a, b;
};

void nhap(PhanSo& a){
    cin >> a.a >> a.b;
}
void rutgon(PhanSo& a){
    ll x = __gcd(a.a, a.b);
    a.a/=x; a.b/=x;
}
void in(PhanSo a) {
    cout << a.a <<'/'<< a.b << endl;
}

int main(){
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}