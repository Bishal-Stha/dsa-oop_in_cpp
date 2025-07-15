#include <iostream>
using namespace std;

class Animal {
public:
virtual void makeSound() = 0; //This makes the function virtual.
};

class Tiger: public Animal {
    public:
    void makeSound() override {
        cout <<"Tiger: Roar" <<endl;
    }
};

//Lets make it some of a challenge and lets see if we can use 
class Bike {
    public:
    virtual void start() = 0;

    void stop(){
        cout <<"Bike is stopping." <<endl;
    }

};

int main() {
    Animal *animal_ptr;
    //will it access the makeSound() of Animal. ❌ Don't run this line. It will crash the code.
    // animal_ptr->makeSound(); 
    Tiger scarface;

    animal_ptr = &scarface;
    animal_ptr->makeSound();

    Bike *b;
    b->stop(); // will this run? lets see.

    return 0;
}