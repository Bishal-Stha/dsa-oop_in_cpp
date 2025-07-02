#include<iostream>
using namespace std;

class Base {
    public:

    void Info(){
        cout <<"this is base class.";
    }
};

class Child: public Base {
    public:
    void Info() {
        cout <<"this is child class." <<endl;
    }

    void About() {
        cout <<"I am about function in child." <<endl;
    }
};

class Boy: public Base {
    public:
    void Info() {
        cout <<"this is Boy class." <<endl;
    }

    void About() {
        cout <<"I am about function in Boy." <<endl;
    }
};

class GrandKid: public Child, public Boy {};

int main(){
    Child c;
    Boy b;
    c.Info();
    c.About();

    b.About();
    b.Info();

    GrandKid g;
    // g.About();
    cout <<endl;
    g.Boy::About();
    g.Child::Info();


    return 0;
}