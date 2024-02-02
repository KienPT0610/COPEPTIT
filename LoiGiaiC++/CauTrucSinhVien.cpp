#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

struct SinhVien {
    string name, ns, lop;
    float a;
};

void nhap(SinhVien& a) {
    getline(cin, a.name);
    cin >> a.lop;
    cin.ignore();
    cin >> a.ns >> a.a;
    if(a.ns[1]=='/') a.ns.insert(0, "0");
    if(a.ns[4]=='/') a.ns.insert(3, "0");
}

void in(SinhVien a) {
    cout << "B20DCCN001 ";
    cout << a.name << ' ' << a.lop << ' ' << a.ns << ' ';
    cout << fixed << setprecision(2) << a.a << endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}