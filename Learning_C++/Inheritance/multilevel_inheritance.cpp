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

class Sub_child: public Child {
    public:
    void Info() override {
        cout <<"this is sub-child class.";
    }
};

int main(){
    Sub_child s;
    s.Info();

    return 0;
}