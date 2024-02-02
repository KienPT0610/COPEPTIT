#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;

int main() {
	char x = ' ';
	vector<int> a;
	int b[100005] = {};
	int i = 0;
	while(x != '\n') {
		int z; cin >> z;
		a.push_back(z);
		b[z]++;
		x = getchar();
	}
	for(int j = 0; j < a.size(); j++) {
		if(b[a[j]]) {
			cout << a[j] << ' ' << b[a[j]] << endl;
			b[a[j]] = 0;
		}
	}
}

