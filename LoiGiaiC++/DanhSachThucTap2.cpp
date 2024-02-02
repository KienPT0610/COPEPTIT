#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int stt = 1;

struct SinhVien {
    int st;
    string msv, ten, lop, email, dn;

    void nhap() {
        st = stt++;
        cin.ignore();
        getline(cin, msv);
        getline(cin, ten);
        cin >> lop >> email >> dn;
    }
    void in() {
        cout << st << ' ' << msv << ' ' << ten << ' ' << lop << ' ' << email << ' ' << dn << endl;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.msv < b.msv;
}

int main(){
    int n; cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) ds[i].nhap();
    // for(int i = 0; i < n; i++) ds[i].in();
    int q; cin >> q; cin.ignore();
    while(q--) {
        string s; cin >> s;
        vector <SinhVien> dss;
        for(int i = 0; i < n; i++) {
            if(ds[i].dn == s) {
                dss.push_back(ds[i]);
            }
        }
        sort(dss.begin(), dss.end(), cmp);
        for(auto sv : dss) sv.in();
    }
}