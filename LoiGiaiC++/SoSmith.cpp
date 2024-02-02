#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int sumCS(int n) {
	int sum = 0;
	while(n!=0) {
		sum += n%10;
		n/=10;
	}
	return sum;
}

bool nto(int n) {
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0 || n%3==0) return false;
	for(int i=5; i<=sqrt(n); i++) {
		if(n%i==0 || n%(i+2)==0) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int N = n;
		map<int, int> mp;
		for(int i = 2; i <= sqrt(n); i++) {
			while(n%i==0) {
				mp[i]++;
				n/=i;
			}
		}	
		if(n!=1) mp[n]++;
		int s = 0;
		for(auto x : mp) {
			while(x.second--) {
				s += sumCS(x.first);
			}
		}
		n = N;
		N = sumCS(N);
		(N==s && !nto(n))?cout << "YES" : cout << "NO";
		cout << endl;
	}
}

