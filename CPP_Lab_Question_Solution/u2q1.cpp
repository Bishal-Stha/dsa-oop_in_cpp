/*
Q1. Write a C++ program using function overloading to calculate the area of a circle,
rectangle, and triangle.
*/

#include <iostream>
# define PI 3.14159 // Define a constant for π
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius; // Area = π * r^2
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width; // Area = length * width
}

// Function to calculate the area of a triangle
double calculateArea(double base, int  height) {
    return 0.5 * base * height; // Area = 0.5 * base * height
}

int main() {
    double radius, length, width, base;
    int height;

    // Calculate area of a circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    // Calculate area of a rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << calculateArea(length, width) << endl;

    // Calculate area of a triangle
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << calculateArea(base, height) << endl;

    return 0;
}