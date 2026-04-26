#include<iostream>
using namespace std;
class Book {
    public:
    string title,author;
    int ISBN;
};
class Library {
    Book b[10];
    int count=0;
    
public:
  bool addNewBook(string &t, string &a, int &id) {
    b[count].title = t;
    b[count].author = a;
    b[count].ISBN = id;
    count++;
    return true;
  }
  bool removeBooks(int &id) {
    for(int i=0; i < count; i++) {
        if (b[i].ISBN == id) {
            b[i]=b[count-1];
            count--;
            return true;
        }
    }
    return false;
  }
  void displayDetails() {
    for(int i=0; i<count; i++){
        cout << b[i].title << " "
             << b[i].author << " "
             << b[i].ISBN << endl;
    }
  }
};
int main() {
    Library l;
    string t = "C++", a="Bjarne";
    int id = 101;
    l.addNewBook(t, a, id);
    int id2= id+1;
    l.addNewBook(t, a, id2);
    l.displayDetails();
    l.removeBooks(id);
    l.displayDetails();
}
