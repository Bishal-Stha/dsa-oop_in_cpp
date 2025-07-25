/*
Q2. Create a class Engine and another class Car that contains Engine as a data member.
Demonstrate aggregation in C++.
*/

#include <iostream>
using namespace std;
// Class definition for Engine
class Engine {
private:
    int horsepower; // Horsepower of the engine
public:
    // Constructor to initialize horsepower
    Engine(int hp) : horsepower(hp) {}

    // Method to display engine details
    void display() const {
        cout << "Engine Horsepower: " << horsepower << " HP" << endl;
    }
};

// Class definition for Car
class Car {
private:
    string model; // Model of the car
    Engine engine; // Aggregation: Car has an Engine
public:
    // Constructor to initialize model and engine
    Car(string m, int hp) : model(m), engine(hp) {}
    // Method to display car details
    void display() const {
        cout << "Car Model: " << model << endl;
        engine.display(); // Display engine details
    }
};

int main() {
    string carModel;
    int engineHorsepower;

    // Accepting car model and engine horsepower from the user
    cout << "Enter car model: ";
    cin >> carModel;
    cout << "Enter engine horsepower: ";
    cin >> engineHorsepower;

    // Creating a Car object with an Engine
    Car car(carModel, engineHorsepower);

    // Displaying car details
    car.display();

    return 0;
}