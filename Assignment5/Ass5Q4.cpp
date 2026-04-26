#include <iostream>
using namespace std;
//single inheritance//
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
};

//multiple inheritance//
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
}


//hierarchical inheritance//
class A {
public:
    void show() {
        cout << "Base class A" << endl;
    }
};

class B : public A {
};

class C : public A {
};


//multilevel inheritance//
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
};

class C : public B {
};

//hybrid inheritance//
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

