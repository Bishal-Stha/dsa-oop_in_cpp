/*
Q1. Create a base class Animal with a virtual function makeSound(). Derive two classes Dog
and Cat and override makeSound(). Demonstrate runtime polymorphism using a base class
pointer.
*/

#include <iostream>
using namespace std;
// Base class Animal
class Animal {
public:
    // Virtual function to make sound
    virtual void makeSound() const {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    // Override makeSound for Dog
    void makeSound() const override {
        cout << "Dog barks." << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Override makeSound for Cat
    void makeSound() const override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    // Create base class pointers
    Animal* animalPtr;

    // Create a Dog object and point to it
    Dog dog;
    animalPtr = &dog;
    animalPtr->makeSound(); // Calls Dog's makeSound

    // Create a Cat object and point to it
    Cat cat;
    animalPtr = &cat;
    animalPtr->makeSound(); // Calls Cat's makeSound

    return 0;
}