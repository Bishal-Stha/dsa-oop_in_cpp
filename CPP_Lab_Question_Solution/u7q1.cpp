/*
Q1. Write a function template to swap two values of any data type. Test it with integers, floats,
and characters.
*/

#include <iostream>
using namespace std;
// Function template to swap two values
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a; // Store the value of a in a temporary variable
    a = b;      // Assign the value of b to a
    b = temp;  // Assign the value of temp (original a) to b
}

int main() {
    // Test with integers
    int x = 5, y = 10;
    cout << "Before swapping (int): x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping (int): x = " << x << ", y = " << y << endl;

    // Test with floats
    float a = 1.5f, b = 2.5f;
    cout << "Before swapping (float): a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping (float): a = " << a << ", b = " << b << endl;

    // Test with characters
    char c1 = 'A', c2 = 'B';
    cout << "Before swapping (char): c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swapping (char): c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}