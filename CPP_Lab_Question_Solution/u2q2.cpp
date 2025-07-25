/*
Q2. Create a program that demonstrates the use of pointers and arrays by accepting and
displaying 5 elements using a pointer.
*/
#include <iostream>
using namespace std;


int main() {
    const int size = 5; // Define the size of the array
    int arr[size];      // Declare an array of integers
    int* ptr = arr;    // Create a pointer to the array

    // Accepting 5 elements using the pointer
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> *(ptr + i); // Using pointer arithmetic to access array elements
    }

    // Displaying the elements using the pointer
    cout << "You entered: ";
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i) << " "; // Using pointer arithmetic to access array elements
    }
    cout << endl;

    return 0;
}