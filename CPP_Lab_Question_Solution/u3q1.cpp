/*
Q1. Create a class Complex that has real and imaginary parts as data members. Use
parameterized constructor to initialize them and display the complex number.
*/

#include <iostream>
using namespace std;
// Class definition for Complex
class Complex {
private:
    double real;       // Real part of the complex number
    double imaginary;  // Imaginary part of the complex number
public:
    // Parameterized constructor to initialize real and imaginary parts
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Method to display the complex number
    void display() const {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    double realPart, imaginaryPart;

    // Accepting real and imaginary parts from the user
    cout << "Enter the real part: ";
    cin >> realPart;
    cout << "Enter the imaginary part: ";
    cin >> imaginaryPart;

    // Creating a Complex object using the parameterized constructor
    Complex complexNumber(realPart, imaginaryPart);

    // Displaying the complex number
    complexNumber.display();

    return 0;
}