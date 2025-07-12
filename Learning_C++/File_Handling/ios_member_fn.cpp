#include <iostream>
using namespace std;

int main() {
    int n = 42;

    cout.fill('*');
    cout.width(10);       // total width = 10
    cout << n << endl;    // *****42

    double pi = 3.14159265359;

    cout.precision(4);
    cout << "Default (scientific): " << pi << endl;

    cout.setf(ios::fixed);      // Force fixed-point
    cout << "Fixed-point: " << pi << endl;

    cout.setf(ios::hex, ios::basefield);  // set hexadecimal
    cout << "Hex: " << n << endl;

    cout.setf(ios::showbase);  // show base prefix (0x)
    cout << "Hex with base: " << n << endl;

    cout.unsetf(ios::hex);     // remove hex
    cout.setf(ios::dec, ios::basefield);  // back to decimal
    cout << "Decimal: " << n << endl;

    return 0;
}
