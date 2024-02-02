#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

class SinhVien{
private:
    string msv, ten, lop, email;
    string id;
public:
    SinhVien() {

    }
    friend istream& operator >> (istream& is, SinhVien &a) {
        is >> a.msv; is.ignore();
        getline(is, a.ten);
        is >> a.lop >> a.email;
        a.id = a.msv.substr(3, 4);
        return is;
    }
    string getID() {
        return this->id;
    }
    string getLop() {
        return this->lop;
    }
    friend ostream& operator << (ostream& os, SinhVien a) {
        os << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.email << endl;
        return os;
    }
};

map<string, vector<SinhVien>> mp;

int main(){
    int n; cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) {
        cin >> ds[i];
        if(ds[i].getID() == "DCCN" || ds[i].getID() == "DCAT"){
            string tmp = ds[i].getLop();
            if(tmp[0] != 'E')
                mp[ds[i].getID()].push_back(ds[i]);
        } else {
            mp[ds[i].getID()].push_back(ds[i]);
        }
    }
    int q; cin >> q; cin.ignore();
    while(q--) {
        string s; getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s << ':' << endl;
        string tmp = "DC";
        tmp += s[0];
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                tmp += s[i+1];
                break;
            }
        }
        for(auto x : mp) {
            if(x.first == tmp) {
                for(auto sv : x.second) {
                    cout << sv;
                }
            }
        }
    }
}