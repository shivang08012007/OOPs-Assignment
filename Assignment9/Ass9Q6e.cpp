#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create data.txt with multiple lines
    ofstream fout("data.txt");
    fout << "Hello World\nThis is C++ File Management\nLine Three\n";
    fout.close();

    ifstream fin("data.txt");
    fin.seekg(10);                        // Move to 10th byte
    cout << "Position after seekg(10): " << fin.tellg() << endl;

    string remaining, line;
    while (getline(fin, line))
        remaining += line + "\n";

    cout << "Remaining content:\n" << remaining;
    fin.close();
}