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
        string s; cin >> s;
        int i = s.length() - 2, j = i + 1;
        while(s[i] <= s[i + 1]) i--;
        if(i < 0) {
            cout << -1 << endl;
            continue;
        }
        while(s[j] >= s[i]) j--;
        while(s[j] == s[j-1]) j--;
        swap(s[j], s[i]);
        cout << s << endl;
    }
}