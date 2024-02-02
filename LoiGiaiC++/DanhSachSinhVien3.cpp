#include <bits/stdc++.h>
typedef long long ll; 
typedef double db;
using namespace std;
//JohnBelus//

int stt = 1;

struct SinhVien {
    string msv = "B20DCCN", name, lop, ns;
    db gpa;

    void nhap() {
        // set msv
        string a = to_string(stt++);
        a.insert(0, 3 - a.length(), '0');
        msv += a;
        getline(cin, name);
        //set name
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        stringstream ss(name); string tmp;
        string res = "";
        while(ss>>tmp) {
            tmp[0] = toupper(tmp[0]);
            res += tmp + " ";
        }
        res.pop_back();
        name = res;

        getline(cin, lop);
        getline(cin, ns);
        // set ns
        if(ns[1]=='/') ns.insert(0, "0");
        if(ns[4]=='/') ns.insert(3, "0");
        cin >> gpa;
    }

    void display() {
        cout << msv << ' ' << name << ' ' << lop << ' ' << ns << ' ';
        cout << fixed << setprecision(2) << gpa << endl; 
    }
};

void nhap(SinhVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        cin.ignore();
        SinhVien x; x.nhap();

        ds[i] = x;
    }
}

void in(SinhVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        ds[i].display();
    }
}

bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}