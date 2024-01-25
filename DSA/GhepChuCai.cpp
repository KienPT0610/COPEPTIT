#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

int n;
char x;
char a[10001] = {};
bool b[10001] = {};

bool isNotNguyenAm(char v) {
    return(v!='A' && v!='E');
}


void display() {
    string s = "";
    for(int i = 1; i <= n; i++) {
        s += a[i];
        if(a[i]=='A'|| a[i]=='E') {
            if(i> 1&& i < n && isNotNguyenAm(a[i-1]) && isNotNguyenAm(a[i+1])) {
                return;
            }
        }
    }
    cout << s << endl;

}

void backtrack(int pos) {
    for(char i = 'A'; i <= x; i++){
        if(!b[i]) {
            b[i] = true;   
            a[pos]=i; 
            if(pos==n) {
                display();
            } else {
                backtrack(pos+1);
            }
            b[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> x;
    n = x - 'A' + 1;
    backtrack(1);
}