#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // No parameter
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Two parameters
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // One parameter
    Rectangle(int x) {
        length = breadth = x;
    }

    void area() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;        // 0,0
    Rectangle r2(5);     // 5,5
    Rectangle r3(4, 6);  // 4,6

    r1.area();
    r2.area();
    r3.area();
}
