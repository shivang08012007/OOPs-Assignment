#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("az.txt");
    for (char c = 'A'; c <= 'Z'; c++)
        fout << c;
    fout.close();

    ifstream fin("az.txt");
    fin.seekg(9);           // 0-indexed, so 9 = 10th character
    char ch;
    fin.get(ch);
    cout << "10th character: " << ch << endl;   // Output: J
    fin.close();
}