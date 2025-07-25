/*
Q1. Write a C++ program to demonstrate the difference between structured programming
and object-oriented programming by calculating the area of a rectangle using both
approaches.
*/
#include<iostream>
using namespace std;

// Structured Programming Approach
void calculateAreaStructured(double length, double width) {
    double area = length * width;
    cout << "Area of the rectangle (Structured): " << area << endl;
}

// Object-Oriented Programming Approach
class Rectangle {
public:
    double length;
    double width;

    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }
};
int main() {
    // Structured Programming Example
    double length, width;
    cout << "Enter length and width of the rectangle (Structured): ";
    cin >> length >> width;
    calculateAreaStructured(length, width);

    // Object-Oriented Programming Example
    cout << "Enter length and width of the rectangle (OOP): ";
    cin >> length >> width;
    Rectangle rect(length, width);
    cout << "Area of the rectangle (OOP): " << rect.calculateArea() << endl;

    return 0;
}