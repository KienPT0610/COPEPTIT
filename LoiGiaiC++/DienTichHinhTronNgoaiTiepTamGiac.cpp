#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
#define PI 3.141592653589793238
//JohnBelus//

struct Point {
    db x, y;
    void nhap() {
        cin >> x >> y;
    }
};

db distance(Point A, Point B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

db S(db a, db b, db c) {
    return 0.25 * sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        Point A, B, C;
        A.nhap(); B.nhap(); C.nhap();
        db a, b, c;
        c = distance(A, B);
        a = distance(B, C);
        b = distance(A, C);
        // cout << a << ' ' << b << ' ' << c << endl; 
        if(a + b <= c || a + c <= b || b + c <= a) {
            cout << "INVALID" << endl;
        }
         else {
            db s = S(a, b, c);
            db r = 0.25 * a * b * c / s;
            cout << fixed << setprecision(3) << PI * r * r << endl;
        }
    }
}

