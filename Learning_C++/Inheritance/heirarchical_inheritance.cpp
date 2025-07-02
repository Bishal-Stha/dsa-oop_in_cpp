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
        cout <<"this is sub-child class." <<endl;
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

int main(){
    Child c;
    Boy b;
    c.Info();
    c.About();

    b.About();
    b.Info();


    return 0;
}