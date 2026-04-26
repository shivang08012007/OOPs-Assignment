#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("az.txt");
    fin.seekg(0, ios::end);
    long size = fin.tellg();
    cout << "File size: " << size << " bytes\n";
    fin.close();
}