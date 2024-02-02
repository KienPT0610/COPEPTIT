#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int stt = 1;

struct NhanVien {
    string manv, name, gt, ns, dc, mst, nkhd;
    int d, m, y;
    void display() {
        cout << manv << ' ' << name << ' ' << gt << ' ' << ns << ' ' << dc << ' ' << mst << ' ' << nkhd << endl;
    }
};

void nhap(NhanVien& a) {
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc); 
    getline(cin, a.mst);
    getline(cin, a.nkhd);
    string res = to_string(stt++);
    res.insert(0, 5 - res.length(), '0');
    a.manv = res;
    a.d = stoi(a.ns.substr(0, 2));
    a.m = stoi(a.ns.substr(3, 2));
    a.y = stoi(a.ns.substr(6, 4));
}

void inds(NhanVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        ds[i].display();
    }
}

bool cmp(NhanVien a, NhanVien b) {
    if(a.y != b.y) return a.y < b.y;
    if(a.y == b.y && a.m != b.m) return a.m < b.m;
    return a.d < b.d;
}

void sapxep(NhanVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}