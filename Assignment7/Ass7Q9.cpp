#include <iostream>
using namespace std;

class Demo {
public:
    void operator()(int a,int b){
        cout<<"Sum = "<<a+b<<endl;
    }
};

int main(){
    Demo d;
    d(3,4);
}