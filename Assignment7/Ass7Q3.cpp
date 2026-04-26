#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    void area(int b, int h) {
        cout << "Right Triangle Area = " << 0.5*b*h << endl;
    }

    void area(int a) {
        cout << "Equilateral Area = " << (sqrt(3)/4)*a*a << endl;
    }

    void area(int a, int b, int c) {
        float s = (a+b+c)/2.0;
        float ar = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Isosceles Area = " << ar << endl;
    }
};

int main() {
    Triangle t;
    t.area(4,5);
    t.area(3);
    t.area(5,5,6);
}
