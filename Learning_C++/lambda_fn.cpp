#include <iostream>
using namespace std;
int main() {
    auto cube = [](int x) { return x * x * x; };

    int num = 10;
    cout << "Cube of " << num << " is " << cube(num) << endl; // Outputs 64
    return 0;
}
