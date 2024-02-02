#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int stt = 1;

struct MatHang {
    int ma;
    string ten, nhom;
    db giamua, giaban, loi;

    void nhap() {
        ma = stt++;
        getline(cin, ten);
        getline(cin, nhom);
        cin >> giamua >> giaban;
        loi = giaban - giamua;
    }
    void display() {
        cout << ma << ' ' << ten << ' ' << nhom << ' ';
        cout << fixed << setprecision(2) << loi << endl;
    }
};

bool cmp(MatHang a, MatHang b) {
    return a.loi > b.loi;
}

void sapxep(MatHang ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main(){
    int n; cin >> n;
    MatHang ds[n];
    for(int i = 0; i < n; i++) {
        cin.ignore();
        ds[i].nhap();
    }
    sapxep(ds, n);
    for(int i = 0; i < n; i++) {
        ds[i].display();
    }
}