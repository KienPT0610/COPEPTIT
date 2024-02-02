// #include <bits/stdc++.h>
// typedef long long ll;
// typedef double db;
// using namespace std;
// //JohnBelus//


// int n;
// vector<string> c(n + 5, "0");

// //test true
// string sum(string a, string b) {
// 	if(a.length() < b.length()) {
// 		a.insert(0, b.length() - a.length(), '0');
// 	} else {
// 		b.insert(0, a.length() - b.length(), '0');
// 	}

// 	string sum = "";
// 	int tmp = 0, nho = 0;
// 	for(int i = a.length() - 1; i>=0; i--) {
// 		tmp = (a[i] - '0') + (b[i] - '0') + nho;
// 		nho = tmp/10;
// 		sum.insert(0, 1, tmp%10 + '0');
// 	}
// 	if(nho!=0) sum.insert(0, 1, nho + '0');
// 	return sum;
// }	

// //test true
// string mul1(string a, char b) {
// 	string res = "";
// 	int tmp = 0, nho = 0;
// 	for(int i = a.length() - 1; i >= 0; i--) {
// 		tmp = (a[i] - '0') * (b - '0')  + nho;
// 		res.insert(0, 1, tmp%10 + '0');
// 		nho = tmp/=10;
// 	}	
// 	if(nho!=0) res.insert(0, 1, nho + '0');
// 	return res;
// }

// //test true
// string mul(string a, string b) {
// 	string res = "0";
// 	for(int i = b.length() - 1; i >= 0; i--) {
// 		string tmp = mul1(a, b[i]);
// 		tmp.insert(tmp.length(), b.length() - i - 1,'0');
// 		res = sum(res, tmp);
// 	}
// 	return res;
// }

// void solve() {
// 	c[0] = c[1] = "1";
// 	for(int i = 2; i <= n + 1; i++) {
// 		string tmp = "0";
// 		for(int j = 0; j < i; j++) {
// 			string tmp1 = mul(c[j], c[i - j - 1]);
// 			tmp = sum(tmp1, tmp);
// 		}
// 		c[i] = tmp;
// 	}
// }

// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(NULL); cout.tie(NULL);
// 	cin >> n;
// 	solve();
// 	cout << c[n + 1] << endl;

// }

// // note: Sn = Cn+1

// #include <bits/stdc++.h>
// using namespace std;
// const int maxn = 2e5 + 5;
// int n, s[maxn];
// int a[maxn], len;
// void add(int x, int delta)
// {
// 	for (int i = 2; i * i <= x; i++){
// 		while (x % i == 0){
// 			s[i] += delta;
// 			x /= i;
// 		}
// 	}
// 	if (x != 1)
// 		s[x] += delta;
// }
// void mul(int x)
// {
// 	len += 5;
// 	for (int i = 0; i < len; i++)
// 		a[i] *= x;
// 	for (int i = 0; i < len; i++){
// 		a[i + 1] += a[i] / 10;
// 		a[i] %= 10;
// 	}
// 	while (len > 0 && !a[len - 1])
// 		len--;
// }

// int main()
// {
// 	cin >> n;
// 	n++;
// 	for (int i = 1; i <= n; i++)
// 		add(2 * n - i + 1, 1);
// 	for (int i = 1; i <= n + 1; i++)
// 		add(i, -1);
// 	a[0] = len = 1;
// 	for (int i = 1; i < maxn; i++)
// 		while (s[i]--)
// 			mul(i);
// 	for (int i = len - 1; i >= 0; i--)
// 		cout << a[i];
// 	cout << endl;
// }


#include <bits/stdc++.h>
using namespace std;
typedef string bint;
bint operator*(bint a, int b) {
    if (a == "0" || b == 0)
        return "0";
    int n = a.length();
    bint c(n, '0');
    int nho = 0;
    for (int i = n - 1; i >= 0; i--) {
        nho += (a[i] - '0') * b;
        c[i] = nho % 10 + '0';
        nho /= 10;
    }
    if (nho > 0)
        c = to_string(nho) + c;
    return c;
}
bint CATALAN(int n) {
    vector<int> tu;
    for (int i = n + 2; i <= 2 * n; i++) tu.push_back(i);
    for (int i = 2; i <= n; i++) {
        int x = i;
        for (int j = 0; j < tu.size() && x > 1; j++) {
            int d = __gcd(tu[j], x);
            x /= d;
            tu[j] /= d;
        }
    }
    bint res = "1";
    for (int i = 0; i < tu.size(); i++) res = res * tu[i];
    return res;
}
int main() {
	short int n; cin >> n;
	cout << CATALAN(n + 1) << endl;
}
