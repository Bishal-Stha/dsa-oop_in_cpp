#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.1415926535;

    cout << fixed << setprecision(3) << "Pi (fixed): " << pi << endl;
    cout << scientific << setprecision(3) << "Pi (sci): " << pi << endl;
    return 0;
}
