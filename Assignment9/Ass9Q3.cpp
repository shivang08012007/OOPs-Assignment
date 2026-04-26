#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int id;
    char name[50];
    float marks;
};

int main() {
    Student s1 = {1, "Alice", 92.5};

    // Write object
    ofstream fout("student.dat", ios::binary);
    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    // Read object
    Student s2;
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout << "ID: " << s2.id << ", Name: " << s2.name << ", Marks: " << s2.marks << endl;
}