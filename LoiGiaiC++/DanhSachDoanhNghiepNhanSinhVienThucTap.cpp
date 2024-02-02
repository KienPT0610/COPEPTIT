#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

struct DoanhNghiep {
    string ma, ten;
    int sl;

    void nhap() {
        cin.ignore();
        getline(cin, ma);
        getline(cin, ten);
        cin >> sl;
    }

    void in() {
        cout << ma << ' ' << ten << ' ' << sl << endl;
    }
};

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    if(a.sl==b.sl) return a.ma < b.ma;
    return a.sl > b.sl;
}

void sapxep(DoanhNghiep ds[], int n) {
    sort(ds, ds+n, cmp);
}

int main(){
    int n; cin >> n;
    DoanhNghiep ds[n];
    for(int i = 0; i < n; i++) {
        ds[i].nhap();
    }
    sapxep(ds, n);
    int q; cin >> q;
    while(q--) {
        int a, b; cin >> a >> b;
        if(a>b) swap(a, b);
        cout << "DANH SACH DOANH NGHIEP NHAN TU "<< a << " DEN " << b << " SINH VIEN:" << endl;
        for(int i = 0; i < n; i++) {
            if(ds[i].sl >= a && ds[i].sl <= b) {
                ds[i].in();
            }
        }
    }
}