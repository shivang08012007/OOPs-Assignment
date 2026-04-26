#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("az.txt");
    fin.seekg(-1, ios::end);
    char ch;
    fin.get(ch);
    cout << "Last character: " << ch << endl;   // Output: Z
    fin.close();
}