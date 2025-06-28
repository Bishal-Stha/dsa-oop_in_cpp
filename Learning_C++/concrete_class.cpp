/*
Any class is Concrete class if it can be instantiated.
*/

#include<iostream>
using namespace std;

//Abstract class
class Animal {
    public:
    virtual void sound() = 0;
};

//Not Abstract class, hence concrete class.
class Concrete {
    public:
    virtual void sound(){
        cout <<"Roar !!"<<endl;
    }
};