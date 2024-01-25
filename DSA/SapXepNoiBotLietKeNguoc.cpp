#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

void bubbleSort(vector<int> a, int n, stack<vector<int>>& st) {
    for(int i = 0; i < n - 1; i++) {
        bool check = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                check = true;
            }
        }
        if(!check) {
            return;
        }
        st.push(a);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        stack<vector<int>> st;
        for(auto &x : a) cin >> x;
        bubbleSort(a, n, st);
        while(!st.empty()) {
            cout << "Buoc " << st.size() << ": ";
            for(auto x : st.top()) cout << x << ' ';
            cout << endl;
            st.pop();
        }
    }
}