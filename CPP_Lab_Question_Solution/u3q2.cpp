/*
Q2. Write a program to show the difference between a structure and class in C++.
Demonstrate access modifiers and default behaviors.
*/

#include <iostream>
using namespace std;
// Structure definition
struct MyStruct {
    int x; // Public by default
    void display() {
        cout << "Struct x: " << x << endl;
    }
};
// Class definition
class MyClass {
private:
    int y; // Private by default
public:
    void setY(int value) {
        y = value; // Public method to set private member
    }
    void display() {
        cout << "Class y: " << y << endl;
    }
};

int main() {
    // Using structure
    MyStruct s;
    s.x = 10; // Direct access to public member
    s.display();

    // Using class
    MyClass c;
    c.setY(20); // Accessing private member through public method
    c.display();

    return 0;
}