/*
Q1. Overload the + operator to add two objects of a Distance class containing feet and
inches.
*/

#include <iostream>
using namespace std;
// Class definition for Distance
class Distance {
private:
    int feet;   // Feet part of the distance
    int inches; // Inches part of the distance
public:
    // Constructor to initialize feet and inches
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {
        // Normalize the distance if inches are greater than or equal to 12
        if (inches >= 12) {
            feet += inches / 12; // Convert inches to feet
            inches = inches % 12; // Keep the remainder in inches
        }
    }

    // Overload the + operator to add two Distance objects
    Distance operator+(const Distance& d) const {
        // Add feet and inches separately
        int totalFeet = feet + d.feet;
        int totalInches = inches + d.inches;

        // Normalize the result
        return Distance(totalFeet, totalInches);
    }

    // Method to display the distance
    void display() const {
        cout << "Distance: " << feet << " feet, " << inches << " inches" << endl;
    }
};

int main() {
    int feet1, inches1, feet2, inches2;

    // Accepting first distance from the user
    cout << "Enter first distance (feet and inches): ";
    cin >> feet1 >> inches1;

    // Accepting second distance from the user
    cout << "Enter second distance (feet and inches): ";
    cin >> feet2 >> inches2;

    // Creating Distance objects
    Distance d1(feet1, inches1);
    Distance d2(feet2, inches2);

    // Adding the two distances using overloaded + operator
    Distance result = d1 + d2;

    // Displaying the result
    result.display();

    return 0;
}