#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    ch = cin.get();   // reads one character (including whitespace)
    cout << "You entered: ";
    cout.put(ch);     // prints that character
    cout << endl;
    return 0;
}
