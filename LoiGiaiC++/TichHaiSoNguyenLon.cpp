#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// JohnBelus

string sum(string a, string b) {
	if(a.length()<b.length()) {
		a.insert(0, b.length()-a.length(), '0');
	} else {
		b.insert(0, a.length()-b.length(), '0');
	}
	int tmp = 0, nho = 0;
	string sum = "";
	for(int i = a.length()-1; i >= 0; i--) {
		tmp = (a[i]-'0') + (b[i]-'0') + nho;
		nho = tmp/10;
		sum.insert(0, 1, tmp%10 + '0');
	}
	if(nho!=0) sum.insert(0, 1, nho + '0');
	return sum;
}

string mul(string a, char b) {
	int tmp = 0, nho = 0;
	string res = "";
	for(int i = a.length()-1; i >= 0; i--) {
		tmp = (a[i]-'0')*(b -'0') + nho;
		nho = tmp/10;
		res.insert(0, 1, tmp%10+'0');
	}
	if(nho!=0) res.insert(0, 1, nho +'0');
	return res;
}

string solve(string a, string b){
	string tmp = "";
	for(int i = b.length()-1; i >= 0; i--) {
		string res = mul(a, b[i]);
		res.insert(res.length(), b.length() - i - 1, '0');
		tmp = sum(tmp, res);
	}
	return tmp;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		string a, b; cin >> a >> b;
		cout << solve(a, b) << endl;		
	}
}

