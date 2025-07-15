/*
Problem Statement: 
Create a program to represent the following class hierarchy:


                   Vehicle
               ----------------
               | speed : int  |
               | price : float|
               ----------------
                       |
      --------------------------------------
     |                  |                  |
   Car               Truck             Motorcycle
----------------   ----------------   ----------------
| seats : int   |   | capacity : int|  | type : char  |
----------------   ----------------   ----------------

*/

#include <iostream>
using namespace std;
class Vehicle {
    protected:
    int speed;
    float price;

    public:
    Vehicle(int speed, float price){
        this->speed= speed;
        this->price = price;
    }

    void display(){
        cout <<"Vehicle\n";
        cout <<"Speed: "<<speed<<endl;
        cout <<"Price: "<<price<<endl;
        cout <<endl;
    }
};

class Car: protected Vehicle {
    protected:
    int seats;
    public:
    Car(int speed, float price, int seats):Vehicle(speed,price){
        this->seats= seats;
    }

    void display(){
        cout <<"Car \n";
        cout <<"Speed: "<<speed<<endl;
        cout <<"Price: "<<price<<endl;
        cout <<"Seats: "<<seats<<endl;
        cout <<endl;
    }
};

class Truck: protected Vehicle {
    protected:
    int capacity;
    public:
    Truck(int speed, float price, int capacity):Vehicle(speed,price){
        this->capacity= capacity;
    }

    void display(){
        cout <<"Truck \n";
        cout <<"Speed: "<<speed<<endl;
        cout <<"Price: "<<price<<endl;
        cout <<"Capacity: "<<capacity<<endl;
        cout <<endl;
    }
};

class Motorcycle: protected Vehicle {
    protected:
    char type;
    public:
    Motorcycle(int speed, float price, char type):Vehicle(speed,price){
        this->type= type;
    }

    void display(){
        cout <<"Motorcycle \n";
        cout <<"Speed: "<<speed<<endl;
        cout <<"Price: "<<price<<endl;
        cout <<"Type: "<<type<<endl;
        cout <<endl;
    }
};

int main() {
    
    Vehicle v1(230,3600000);
    Truck t1(180,4600000,5);
    Car c1(299,8000000,5);
    Motorcycle m1(250,500000,'Z');

    v1.display();
    t1.display();
    c1.display();
    m1.display();
    return 0;
}