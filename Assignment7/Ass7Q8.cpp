#include <iostream>
using namespace std;

class Array {
    int a[5];
public:
    void input(){
        for(int i=0;i<5;i++)
            cin>>a[i];
    }

    int operator[](int i){
        if(i<0 || i>=5){
            cout<<"Out of bound\n";
            return -1;
        }
        return a[i];
    }
};

int main(){
    Array arr;
    arr.input();
    cout << arr[2];
}