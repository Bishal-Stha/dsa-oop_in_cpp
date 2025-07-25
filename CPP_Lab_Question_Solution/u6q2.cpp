/*
Q2. Write a program to demonstrate the use of a friend function that accesses private data of
two classes ClassA and ClassB.
*/

#include <iostream>
using namespace std;
// Forward declaration of ClassB
class ClassB;
// Class definition for ClassA
class ClassA {
private:
    int dataA; // Private data member of ClassA
public:
    // Constructor to initialize dataA
    ClassA(int a) : dataA(a) {}

    // Friend function declaration
    friend void displayData(const ClassA& a, const ClassB& b);
};

// Class definition for ClassB
class ClassB {
private:
    int dataB; // Private data member of ClassB
public:
    // Constructor to initialize dataB
    ClassB(int b) : dataB(b) {}

    // Friend function declaration
    friend void displayData(const ClassA& a, const ClassB& b);
};

// Friend function definition to access private data of both classes
void displayData(const ClassA& a, const ClassB& b) {
    cout << "Data from ClassA: " << a.dataA << endl; // Accessing private member of ClassA
    cout << "Data from ClassB: " << b.dataB << endl; // Accessing private member of ClassB
}

int main() {
    int aValue, bValue;

    // Accepting values for ClassA and ClassB
    cout << "Enter value for ClassA: ";
    cin >> aValue;
    cout << "Enter value for ClassB: ";
    cin >> bValue;

    // Creating objects of ClassA and ClassB
    ClassA objA(aValue);
    ClassB objB(bValue);

    // Displaying data using the friend function
    displayData(objA, objB);

    return 0;
}