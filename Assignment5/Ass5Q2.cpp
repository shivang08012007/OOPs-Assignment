#include <iostream>
using namespace std;

class Base {
protected:
    int x;
};

class Derived : public Base {
public:
    void set() {
        x = 10;
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Derived d;
    d.set();
    return 0;
}
