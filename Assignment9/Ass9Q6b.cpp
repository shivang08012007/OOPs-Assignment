#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create file with 1–9
    fstream file("nums.txt", ios::out);
    for (int i = 1; i <= 9; i++)
        file << i;
    file.close();

    // Overwrite 5th character (index 4)
    file.open("nums.txt", ios::in | ios::out);
    file.seekp(4);
    file.put('X');
    file.close();

    ifstream fin("nums.txt");
    string content;
    getline(fin, content);
    cout << "After overwrite: " << content << endl;
}