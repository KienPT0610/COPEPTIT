#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

map<string, pair<int, int>> kq;
class SinhVien {
    private:
        string msv, name;
    public:
        void nhap() {
            cin >> msv; cin.ignore();
            getline(cin, name);
            kq[msv] = {1, 0};
        }
        void xemmh() {
            cout << msv << ' ' << name << ' ';
            (kq[msv].first*kq[msv].second==1)?cout<<"OK\n":cout<<"FAIL\n";
        }
        string getID() {
            return msv;
        }
};

class TimeLine{
    private:
        string date, time, msv, wb;
    public:
        void nhap() {
            cin >> date >> time >> msv >> wb;
            kq[msv].second = 1;
            if(wb!="code.ptit.edu.vn") kq[msv].first = 0;
        }
};

vector<SinhVien> sv;

void nhapsv(int n) {
    for(int i = 0; i < n; i++) {
        SinhVien a; a.nhap();
        sv.push_back(a);
    }
}

void nhaptl(int m) {
    for(int i = 0; i < m; i++) {
        TimeLine a; a.nhap();
    }
}

bool cmp(SinhVien a, SinhVien b) {
    return a.getID() < b.getID();
}

void inkq() {
    sort(sv.begin(), sv.end(), cmp);
    for(auto x : sv) {
        x.xemmh();
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; nhapsv(n);
    int m; cin >> m; nhaptl(m);
    inkq();
}

/*
5
SV00001 Pham Duc Tuan
SV00002 Pham Hong Trong Tam
SV00003 Nguyen Duc Trong Tam
SV00004 Luong Hong Trong Tam    
SV00005 Pham Manh Hung
10
26/11/2022 19:27:24 SV00005 code.ptit.edu.vn
26/11/2022 19:15:12 SV00005 code.ptit.edu.vn
26/11/2022 19:19:56 SV00001 code.ptit.edu.vn
26/11/2022 19:56:41 SV00005 code.ptit.edu.vn
26/11/2022 19:59:27 SV00005 code.ptit.edu.vn
26/11/2022 19:52:10 SV00003 facebook.com
26/11/2022 19:23:16 SV00004 code.ptit.edu.vn
26/11/2022 19:28:16 SV00004 code.ptit.edu.vn
26/11/2022 19:23:16 SV00005 youtube.com
26/11/2022 19:22:34 SV00004 youtube.com
*/