#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

class SinhVien {
    private:
        string msv, name, lop, ns;
        db gpa;
    public:
        void nhap() {
            getline(cin, name);
            cin >> lop >> ns >> gpa;
            if(ns[1]=='/') ns.insert(0, "0");
            if(ns[4]=='/') ns.insert(3, "0");
        }

        void xuat(){
            cout << "B20DCCN001 " << name << ' ' << lop << ' ' << ns << ' ';
            cout << fixed << setprecision(2) << gpa; 
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}