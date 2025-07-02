#include<iostream>
using namespace std;

class Base {
    public:

    virtual void Info(){
        cout <<"this is base class.";
    }
};

class Child: public Base {
    public:
    void Info() override {
        cout <<"this is child class.";
    }
};

int main(){
    Child c;
    c.Info();

    return 0;
}