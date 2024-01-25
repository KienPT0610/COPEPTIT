#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

string month = "02";
vector<string> day;
string year = "2";
int n = 3;
set<string> st;

void display() {
    string s = "";
    for(int i = 0; i < day.size(); i++) {
        s = day[i] +  month + year;
        s.insert(2, 1, '/');
        s.insert(5, 1, '/');
        st.insert(s);
    }
    
}

void solve(int pos) {
    for(int i = '0'; i <= '2'; i+=2) {
        year.push_back(i);
        if(pos==n) {
            display();
        } else {
            solve(pos+1);
        }
        year.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    day.push_back("02"); 
    day.push_back("20");
    day.push_back("22");
    solve(1);
    for(auto x : st) cout << x << endl;
}