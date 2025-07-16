#include<iostream>
using namespace std;

class Base {
    public:
    void show(){
        cout <<"This is Base Class."<<endl;
    }

    Base(){
        cout <<"Base Constructor."<<endl;
    }

    ~ Base(){
        cout <<"Base Destructor."<<endl;
    }
};

class Child: public Base {
    public:
    Child(){
        cout <<"Child Constructor."<<endl;
    }

    ~ Child(){
        cout <<"Child Destructor."<<endl;
    }
};

int main(){
    Base *b = new Base();
    cout<<endl;
    Child c;
    cout<<endl;
    b = &c;
    delete b;
}