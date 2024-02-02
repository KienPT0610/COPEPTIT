#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus

int skh = 1; 
class KhachHang {
	public:
		string ma, ten, gt, ns, dc;
		friend istream& operator >> (istream& is, KhachHang& a);
		
};

map<int, KhachHang> kh;
istream& operator >> (istream& is, KhachHang& a) {
	scanf("\n");
	getline(is, a.ten);
	is >> a.gt >> a.ns;
	is.ignore();
	getline(is, a.dc);
	kh[skh++] = a;
	return is;
}


int smh = 1;
class MatHang {
	public:
		string ma, ten, dv;
		int giamua, giaban;
		friend istream& operator >> (istream& is, MatHang& a);
		
		int getGiaMua() {
			return this->giamua;
		}
		int getGiaBan() {
			return this->giaban;
		}
};

map<int, MatHang> mh;
istream& operator >> (istream& is, MatHang& a) {
	scanf("\n");
	getline(is, a.ten);
	getline(is, a.dv);
	is >> a.giamua >> a.giaban;
	mh[smh++] = a;
	return is;
}

int shd=1;
class HoaDon {
	public:
		string ma, mkh, mhd;
		int slg, loinhuan;
		KhachHang e; MatHang f;
		friend istream& operator >> (istream& is, HoaDon& a);
		friend ostream& operator << (ostream& os, HoaDon a) {
			os << a.ma << ' ' << a.e.ten << ' ' << a.e.dc << ' ' << a.f.ten << ' ' << a.slg << ' ' << a.slg*a.f.getGiaBan() << ' ' << a.loinhuan << endl;
	        return os;
		}
		
		int getLN() {
			return this->loinhuan;
		}
};

map<int, HoaDon> hd;
istream& operator >> (istream& is, HoaDon& a) {
	is >> a.mkh >> a.mhd >> a.slg;
	string res = to_string(shd);
	res.insert(0, 3 - res.length(), '0');
	res = "HD" + res;
	a.ma = res;
	hd[shd++] = a;
	string s = a.mkh.substr(2, 3);
	a.e = kh[stoi(s)];
	s = a.mhd.substr(2, 3);
	a.f = mh[stoi(s)];
	a.loinhuan = a.slg*(a.f.getGiaBan() - a.f.getGiaMua());
	return is;
}

bool cmp(HoaDon a, HoaDon b) {
    if(a.getLN()==b.getLN()) return a.ma < b.ma;
	return a.getLN()> b.getLN();
}

void sapxep(HoaDon dshd[], int k) {
	sort(dshd, dshd+k, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
