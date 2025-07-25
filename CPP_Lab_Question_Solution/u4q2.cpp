/*
Q2. Create a program that overloads a unary operator -- to decrease the value of private
data members in a class Counter.
*/

#include <iostream>
using namespace std;
// Class definition for Counter
class Counter {
private:
    int count; // Private data member to hold the count value
public:
    // Constructor to initialize count
    Counter(int c = 0) : count(c) {}

    // Overload the -- operator to decrease the count
    Counter operator--() {
        --count; // Decrease the count by 1
        return *this; // Return the current object
    }

    // Method to display the current count
    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    int initialCount;

    // Accepting initial count from the user
    cout << "Enter initial count: ";
    cin >> initialCount;

    // Creating a Counter object
    Counter counter(initialCount);

    // Displaying the initial count
    counter.display();

    // Decreasing the count using overloaded -- operator
    --counter;

    // Displaying the count after decrement
    counter.display();

    return 0;
}