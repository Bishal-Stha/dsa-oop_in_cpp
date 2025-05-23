#include<iostream>
using namespace std;

class Vehicle {
    public:
    string brand;
    string model;
    float price;
    int YOM; // Year of Manufacture
};

class Bike : public Vehicle {
    public:
    float maxSpeed;
    void bikeIntro() {
        cout <<"Brand: " <<brand <<endl;
        cout <<"Model: " <<model <<endl;
        cout <<"Price: " <<price <<endl;
        cout <<"Year of Manufactured: " <<YOM <<endl;
        cout <<"Max Speed: " <<maxSpeed <<endl;
    }
};

int main()
{
    Bike royal_enfield;
    royal_enfield.brand = "Yamaha";
    royal_enfield.model = "Fz 7";
    royal_enfield.price = 349999;
    royal_enfield.YOM = 2022;
    royal_enfield.maxSpeed = 217.75;
    royal_enfield.bikeIntro();
}