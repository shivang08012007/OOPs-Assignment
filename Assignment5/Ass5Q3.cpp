#include <iostream>
using namespace std;
public//
class A {
public:
    int x;
};

class B : public A {
};

//protected//
class A {
public:
    int x;
};

class B : protected A {
};

//private//
class A {
public:
    int x;
};

class B : private A {
};
