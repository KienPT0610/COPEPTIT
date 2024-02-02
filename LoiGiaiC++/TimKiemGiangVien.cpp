#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int stt = 1;

struct GiangVien {
    string ma, name, nganh, s;
    void nhap() {
        ma = to_string(stt++);
        ma.insert(0, 2 - ma.length(), '0');
        ma = "GV" + ma;
        getline(cin, name);
        s = name;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        getline(cin, nganh);
        stringstream ss(nganh); string tmp, res = "";
        while(ss >> tmp) {
            res += toupper(tmp[0]);
        }
        nganh = res;
    }

    void in() {
        cout << ma << ' ' << name << ' ' << nganh << endl;
    }
};

int main(){
    int n; cin >> n; cin.ignore();
    GiangVien ds[n];
    for(int i = 0; i < n; i++) ds[i].nhap();
    int q; cin >> q; cin.ignore();
    while(q--) {
        string s; getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0; i < n; i++) {
            if(ds[i].s.find(s) != -1) {
                ds[i].in();
            }
        }
    }

}