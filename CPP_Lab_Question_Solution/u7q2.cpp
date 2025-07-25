/*
Q2. Write a C++ program that reads two integers and performs division. Use exception
handling to handle the divide-by-zero scenario using try, throw, and catch.
*/

#include <iostream>
using namespace std;
// Function to perform division
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero is not allowed."); // Throw an exception
    }
    return static_cast<double>(numerator) / denominator; // Perform division
}

int main() {
    int num1, num2;

    // Accepting two integers from the user
    cout << "Enter two integers (numerator and denominator): ";
    cin >> num1 >> num2;

    try {
        // Attempt to perform division
        double result = divide(num1, num2);
        cout << "Result: " << result << endl; // Display the result
    } catch (const runtime_error& e) {
        // Catch the exception and display an error message
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}