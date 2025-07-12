#include<iostream>
using namespace std;

class Base {
    public:

    Base(){
        cout <<"I am base."<<endl;
    }

    virtual void Info(){
        cout <<"this is base class.";
    }
};

class Child: public Base {
    public:
    Child() {
        cout <<"I am child."<<endl;
    }

    void Info() override {
        cout <<"this is child class.";
    }
};

int main(){
    Child c;
    c.Info();

    return 0;
}