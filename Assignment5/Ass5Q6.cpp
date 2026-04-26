#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    float price;

    void getBook() {
        cout << "Enter title, author, price: ";
        cin >> title >> author >> price;
    }

    void showBook() {
        cout << title << " " << author << " " << price << endl;
    }
};

class Textbook : public Book {
public:
    string subject;

    void getTextbook() {
        getBook();
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showTextbook() {
        showBook();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Textbook t;
    t.getTextbook();
    t.showTextbook();
    return 0;
}
