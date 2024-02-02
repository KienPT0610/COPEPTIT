#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n; cin.ignore();
        string s; getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        stringstream ss(s); string tmp;
        vector<string> vt;
        while(ss >> tmp) {
            tmp[0] = toupper(tmp[0]);
            vt.push_back(tmp);
        }
        if(n==1) {
            cout << vt[vt.size() - 1];
            for(int i = 0; i < vt.size() - 1; i++) {
                cout << ' ' << vt[i];
            }
        } else {
            for(int i = 1; i < vt.size(); i++) {
                cout << vt[i] << ' ';
            }
            cout << vt[0];
        }
        cout << endl;
    }
}