#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

struct PhanSo {
    ll tu, mau;
    void display() {
        cout << tu << '/' << mau;
    }
};

void process(PhanSo A, PhanSo B){
    PhanSo C;
    C.tu = A.tu*B.mau + B.tu*A.mau;
    C.mau = A.mau * B.mau;
    ll x = __gcd(C.tu, C.mau);
    C.tu/=x; C.mau/=x;
    C.tu*=C.tu; C.mau*=C.mau;
    PhanSo D;
    D.tu = A.tu * B.tu * C.tu;
    D.mau = A.mau * B.mau * C.mau;
    x = __gcd(D.tu, D.mau);
    D.tu/=x; D.mau/=x;
    C.display();
    cout << ' ';
    D.display(); cout << endl;
    
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}