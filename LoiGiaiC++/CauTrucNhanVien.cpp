#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

struct NhanVien{
    string name, sex, date, address, mst, nkhd;
};

void nhap(NhanVien &a){
    getline(cin, a.name);
    cin >> a.sex >> a.date;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.mst >> a.nkhd;
}

void in(NhanVien a){
    cout << "00001 ";
    cout << a.name << ' ' << a.sex << ' ' << a.date << ' ' << a.address << ' ' << a.mst <<' ' << a.nkhd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}