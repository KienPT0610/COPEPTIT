#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus

struct Point{
	ll x, y, z;
	void nhap() {
		cin >> x >> y >> z;
	}
};

Point Vector(Point A, Point B) {
	Point AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	AB.z = B.z - A.z;
	return AB;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		Point A, B, C, D;
		A.nhap(); B.nhap(); C.nhap(); D.nhap();
		Point AB, AC, AD;
		AB = Vector(A, B);
		AC = Vector(A, C);
		AD = Vector(A, D);
		
		ll s = 0;
		Point ABAC;
		ABAC.x = AB.y*AC.z - AC.y*AB.z; 
		ABAC.y = AB.z*AC.x - AC.z*AB.x;
		ABAC.z = AB.x*AC.y - AC.x*AB.y;
		
		s = ABAC.x*AD.x + ABAC.y*AD.y + ABAC.z*AD.z;
		(s==0)?cout << "YES" : cout << "NO";
		cout << endl;
	}
}

