#include<iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");  // Create/Open file for writing

    if (!fout) {
        cout << "Failed to open file.\n";
        return 1;
    }

    fout << "Hello, file!\n";
    fout << "This is a line in C++ file handling.";
    fout.close();  // Always close the file
    return 0;
}
