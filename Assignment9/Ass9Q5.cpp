#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Length: " << str.length() << endl;

    ofstream fout("string.txt");
    fout << str;
    fout.close();

    ifstream fin("string.txt");
    string fetched;
    getline(fin, fetched);
    fin.close();

    cout << "Fetched from file: " << fetched << endl;
}