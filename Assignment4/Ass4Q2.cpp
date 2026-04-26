#include <iostream>
using namespace std;

class Rectangle {
    int l, b;

public:
    Rectangle(int x = 0, int y = 0) { // default arguments
        l = x;
        b = y;
    }

    ~Rectangle() { // destructor
        cout << "Object destroyed\n";
    }

    void area() {
        cout << l * b << endl;
    }
};

int main() {
    Rectangle r[3] = {Rectangle(), Rectangle(5), Rectangle(4,6)};

    for (int i = 0; i < 3; i++) {
        r[i].area();
    }
}