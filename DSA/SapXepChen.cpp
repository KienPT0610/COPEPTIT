#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
//JohnBelus//

void display(int a[101], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << endl;
}

void insertSort(int a[101], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Buoc " << i << ": ";
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        display(a, i+1);
    }  
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a[n]; for(auto &i : a) cin >> i;
    insertSort(a, n);
}