#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area not defined\n";
    }
    virtual void display() {
        cout << "Shape\n";
    }
};

class Circle : public Shape {
    int r;
public:
    Circle(int x) { r = x; }
    void area() {
        cout << "Circle Area = " << 3.14*r*r << endl;
    }
    void display() {
        cout << "Circle\n";
    }
};

class Rectangle : public Shape {
    int l,b;
public:
    Rectangle(int x,int y){ l=x; b=y; }
    void area() {
        cout << "Rectangle Area = " << l*b << endl;
    }
    void display() {
        cout << "Rectangle\n";
    }
};

class Triangle : public Shape {
    int b,h;
public:
    Triangle(int x,int y){ b=x; h=y; }
    void area() {
        cout << "Triangle Area = " << 0.5*b*h << endl;
    }
    void display() {
        cout << "Triangle\n";
    }
};

int main() {
    Shape *s;

    Circle c(3);
    Rectangle r(4,5);
    Triangle t(4,6);

    s=&c; s->display(); s->area();
    s=&r; s->display(); s->area();
    s=&t; s->display(); s->area();

    return 0;
}