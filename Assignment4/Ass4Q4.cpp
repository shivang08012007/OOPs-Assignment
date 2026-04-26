#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    void show() {
        cout << x << endl;
    }
};

int main() {

    // int
    int *p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;

    // float
    float *f = new float;
    *f = 5.5;
    cout << *f << endl;
    delete f;

    // array
    int *arr = new int[3];
    arr[0]=1; arr[1]=2; arr[2]=3;
    for(int i=0;i<3;i++) cout<<arr[i]<<" ";
    delete[] arr;

    // object
    Demo *d = new Demo;
    d->x = 100;
    d->show();
    delete d;

    // array of objects
    Demo *darr = new Demo[2];
    darr[0].x = 1;
    darr[1].x = 2;
    darr[0].show();
    darr[1].show();
    delete[] darr;
}