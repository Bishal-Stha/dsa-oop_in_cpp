#include <iostream>
using namespace std;
class Apple {
    public:
    void display() {
        cout <<"We have IOS" <<endl ;
    }
};

class Iphone: public Apple {
    void aboutIphone(){
        cout <<"We are the most famous mobile phone brand." <<endl;
    }

    void display(){
        cout <<"Iphone has IOS." <<endl;
    }
};

int main() {
    Apple *a;
    Iphone i;
    a = &i;
    a->display();
    //a->aboutIphone(); //This won't work because parent can't access childs attributes and methods.

    // a->display(); It didn't gave the "Iphone has IOS."
    //🔥 This is because it is early binding. pointer a is assigned to Apple class in compile time. and we know one class can't access other class member functions and attributes.

    //For the solution of this problem, we have late binding that assigns the return type of pointer at runtime not compile. if only pointer a was assigned as Iphone at [a = &i] it would work didn't it.
    return 0;
}