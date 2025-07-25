/*
Q1. Define a base class Shape with a method area() and derive two classes Circle and
Rectangle. Use public inheritance and override the area method.
*/

#include <iostream>
#define PI 3.1415 // For PI constant
using namespace std;
// Base class Shape
class Shape {
public:
    // Virtual method to calculate area
    virtual double area() const = 0; // Pure virtual function
};
// Derived class Circle
class Circle : public Shape {
private:
    double radius; // Radius of the circle
public:
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Override area method for Circle
    double area() const override {
        return PI * radius * radius; // Area = π * r^2
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length; // Length of the rectangle
    double width;  // Width of the rectangle
public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override area method for Rectangle
    double area() const override {
        return length * width; // Area = length * width
    }
};

int main() {
    double radius, length, width;

    // Accepting radius for Circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    Circle circle(radius); // Creating Circle object

    // Accepting dimensions for Rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    Rectangle rectangle(length, width); // Creating Rectangle object

    // Displaying areas
    cout << "Area of the Circle: " << circle.area() << endl;
    cout << "Area of the Rectangle: " << rectangle.area() << endl;

    return 0;
}