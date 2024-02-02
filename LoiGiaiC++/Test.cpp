#include <bits/stdc++.h>

using namespace std;

class Author{
private:
    string name, email, gender;
public:
    void nhapAuthor() {
        getline(cin, this->name);
        getline(cin, this->email);
        getline(cin, this->gender);
    }

    void displayAuthor() {
        cout << "Name : " << this->name << endl;
        cout << "Email : " << this->email << endl;
        cout << "Gender : " << this->gender << endl; 
    }
};

class Book{
private:
    string name;
    vector<Author> authors;
    int price, qty;
public:
    void nhapBook() {
        getline(cin, this->name);
        cin >> this->price >> this->qty;
        int t; cin >> t; cin.ignore();
        for(int i = 0; i < t; i++) {
            Author x; x.nhapAuthor();
            authors.push_back(x);
        }
    }

    string getName() {
        return this->name;
    }

    void displayBook() {
        cout << "-----------------------\n";
        cout << "Book information :\n";
        cout << "Name : " << this->name << endl;
        cout << "Price : " << this->price << endl;
        cout << "Quantity : " << this->qty << endl;
        cout << "Author information :\n";
        for(int i = 0; i < authors.size(); i++) {
            cout << "#" << i + 1 << endl;
            authors[i].displayAuthor();
        }
    }
};  

bool cmp(Book a, Book b) {
    return a.getName() < b.getName();
}

int main() {
    int n; cin >> n; cin.ignore();
    vector<Book> v;
    for(int i = 0; i < n; i++) {
        string tmp; getline(cin, tmp); 
        Book x; x.nhapBook();
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);

    for(auto b : v) {
        b.displayBook();
    }
}