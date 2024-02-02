#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

void tach_tu(string s, set<string>& st) {
    stringstream ss(s); string tmp;
    while(ss>>tmp) {
        st.insert(tmp);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; cin.ignore();
    while(t--){
        string s; getline(cin, s);
        string s2; getline(cin, s2);
        set<string> st1, st2;
        tach_tu(s, st1); tach_tu(s2, st2);
        for(auto x : st1) {
            if(st2.find(x)==st2.end()){
                cout << x << ' ';
            }
        }
        cout << endl;
    }
}