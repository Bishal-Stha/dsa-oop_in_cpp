#include<iostream>
using namespace std;

class X {
    public:
    virtual void show() = 0;
    //Pure virtual function. //Now, X is an abstract class. It can not be instantiated, can only be inherited.
};

class A:  public X {
    public:
    void show() override{
        cout <<"This is Class A\n";
    }
};

class B:  public X {
    public:
    void show() override{
        cout <<"This is Class B\n";
    }
};

class C: public A, public B {};

int main()
{
    C c1;
    // c1.show();
    // This is a great Diamond Problem.(💎)
    /*
    This occurs because when different classes have same function and child class inherits multiple classes having same function. Child class gets confuse about what class function to inherit.
    */
//    c1.A::X::show();
//    c1.show();
    c1.A::show();
    c1.B::show();
}