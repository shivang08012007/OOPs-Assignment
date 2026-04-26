#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    int ISBN;

    Book() {}

    Book(string t, string a, int id) {
        this->title = t;
        this->author = a;
        this->ISBN = id;
    }
};

class Library {
    Book b[10];
    int count = 0;

public:
    bool addNewBook(string t, string a, int id) {
        b[count] = Book(t, a, id);
        count++;
        return true;
    }

    bool removeBooks(int id) {
        for (int i = 0; i < count; i++) {
            if (b[i].ISBN == id) {
                b[i] = b[count - 1];
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << b[i].title << " "
                 << b[i].author << " "
                 << b[i].ISBN << endl;
        }
    }
};

int main() {
    Library l;

    l.addNewBook("C++", "Bjarne", 101);
    l.addNewBook("Java", "James", 102);

    l.displayDetails();

    l.removeBooks(101);

    l.displayDetails();
}
