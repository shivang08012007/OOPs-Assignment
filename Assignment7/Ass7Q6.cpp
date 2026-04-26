#include <iostream>
#include <string.h>
using namespace std;

class STRING {
    char str[100];
public:
    void input() {
        cin >> str;
    }

    void display() {
        cout << str << endl;
    }

    bool operator==(STRING s) {
        return strcmp(str,s.str)==0;
    }

    STRING operator+(STRING s) {
        STRING temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }
};

int main(){
    STRING s1,s2,s3;
    s1.input();
    s2.input();

    if(s1==s2)
        cout<<"Equal\n";
    else
        cout<<"Not Equal\n";

    s3 = s1 + s2;
    s3.display();
}
