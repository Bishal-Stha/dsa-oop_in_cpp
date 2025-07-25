/*
Q2. Define a simple class Person with attributes name and age. Add a method
displayInfo() to show the data. Explain how encapsulation is achieved in this program.
*/

#include <iostream>
#include <string>
using namespace std;

// Class definition for Person
class Person {
private:
    string name; // Private attribute for name
    int age;     // Private attribute for age
public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) {}

    // Method to display person's information
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a Person object
    Person person("Alice", 30);
    
    // Display person's information
    person.displayInfo();

    return 0;
}