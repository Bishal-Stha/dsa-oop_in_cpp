#include<iostream>
using namespace std;

class Parent {
    protected:
    int x= 10;

    public:
    void show()
    {
        cout <<"x: "<<x<<endl;
    }
};

class Child : public Parent {
    public:
    void show(){
        cout <<"Child " <<"x: "<<x<<endl;
    }
};

class Kid : public Child {
    public:
    void show(){
        cout <<"Kid " <<"x: "<<x<<endl;
    }
};

int main(){
    Child c;
    Kid k;
    c.show();
    k.show();
}