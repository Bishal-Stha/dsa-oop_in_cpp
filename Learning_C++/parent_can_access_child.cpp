#include<iostream>
using namespace std;

class Parent {
    public:
    // greet function lai virtual banaunu necessary thiyena but Run Time Type Information (RTTI) le parent sanga atleast euta matra vayeni virtual function hos vanxa.
    virtual void greet(){
        cout <<"Hi, i am a parent." <<endl;
    }
};

class Child: public Parent {
    public:
    void enjoy(){
        cout <<"I am a child, i enjoy life." <<endl;
    }
};

class Friend {
    public:
    virtual void laugh(){
        cout <<"I laugh like there's no tomorrow." <<endl;
    }
};

int main()
{
    Child c1;
    Parent *p = &c1;
    // p.enjoy(); // This won't work.

    Child* actualChild = dynamic_cast<Child*>(p);
    if (actualChild) {
    actualChild->enjoy();  // ✅ Now Parent accesses Child's function!
    }

    Friend *f;
    // f = &c1; //This is impossible. If classes are unrelated, then they can not access each others member fuctions and variables by any means.
    return 0;
}