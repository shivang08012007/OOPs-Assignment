#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar {
    float r, angle;
public:
    Polar(float a,float b){
        r=a; angle=b;
    }

    operator Cartesian();
};

class Cartesian {
    float x,y;
public:
    void show(){
        cout<<"x="<<x<<" y="<<y<<endl;
    }

    Cartesian(float a=0,float b=0){
        x=a; y=b;
    }

    friend class Polar;
};

Polar::operator Cartesian(){
    float x = r * cos(angle);
    float y = r * sin(angle);
    return Cartesian(x,y);
}

int main(){
    Polar p(10,5);
    Cartesian c;
    c = p;
    c.show();
}