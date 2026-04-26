#include <iostream>
using namespace std;

// Base class
class LibraryUser {
protected:
    string name;
    int id;
    string contact;

public:
    void getUserData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Contact: ";
        cin >> contact;
    }

    void showUserData() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

// Derived class Student
class Student : public LibraryUser {
private:
    int grade;

public:
    void getStudentData() {
        getUserData();
        cout << "Enter Grade: ";
        cin >> grade;
    }

    void showStudentData() {
        showUserData();
        cout << "Grade: " << grade << endl;
    }
};

// Derived class Teacher
class Teacher : public LibraryUser {
private:
    string department;

public:
    void getTeacherData() {
        getUserData();
        cout << "Enter Department: ";
        cin >> department;
    }

    void showTeacherData() {
        showUserData();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "\n--- Student Details ---\n";
    s.getStudentData();
    s.showStudentData();

    cout << "\n--- Teacher Details ---\n";
    t.getTeacherData();
    t.showTeacherData();

    return 0;
}

