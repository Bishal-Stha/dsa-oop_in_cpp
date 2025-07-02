#include<iostream>
using namespace std;

class Base {
    public:

    void Info(){
        cout <<"this is base class.";
    }
};

class Base2 {
    public:
    void About() {
        cout <<"this is child class.";
    }
};

class Child: public Base, public Base2 {
    public:
    void Info() {
        cout <<"this is sub-child class.";
    }

    void About() {
        cout <<"I am about function in child.";
    }
};

int main(){
    Child c;
    c.Info();
    c.About();

    return 0;
}