#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("hello.txt", ios::out);
    string text = "HelloWorld";
    for (char c : text) {
        file.put(c);
        cout << "After writing '" << c << "', put pointer at: " << file.tellp() << endl;
    }
    file.close();

    // Replace "World" (starts at index 5) with "C++  " (padded to same length)
    file.open("hello.txt", ios::in | ios::out);
    file.seekp(5);
    file.write("C++  ", 5);   // pad with spaces to match "World" length
    file.close();

    ifstream fin("hello.txt");
    string result;
    getline(fin, result);
    cout << "File content: " << result << endl;
    fin.close();
}