#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "This is Base class" << endl;
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "This is Derived class" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.showBase();
    d.showBase();     // inherited
    d.showDerived();

    return 0;
}