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
        friend istream& operator >> (istream& is, SinhVien &a) {
            getline(is, a.name);
            is >> a.lop >> a.ns >> a.gpa;
            if(a.ns[1]=='/') a.ns.insert(0, "0");
            if(a.ns[4]=='/') a.ns.insert(3, "0");
            return is;
        }
        friend ostream& operator << (ostream& os, SinhVien a) {
            os << "B20DCCN001 " << a.name << ' ' << a.lop << ' ' << a.ns << ' ';
            os << fixed << setprecision(2) << a.gpa << endl;
            return os;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}