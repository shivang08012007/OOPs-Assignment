#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float a){
        x = a;
    }

    void show(){
        cout << x;
    }
};

int main(){
    float a = 5.5;
    Test t = a;
    t.show();
}
