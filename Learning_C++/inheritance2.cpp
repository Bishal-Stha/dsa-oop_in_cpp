#include<iostream>
using namespace std;

class Human {
    public:
    int x=10;
    private:
    int y=20;
    protected:
    int z=30;   
};

class Asian: Human {
    public:
    void display(){
    cout <<"X: " <<x <<endl;
    // cout <<"Y: " <<y <<endl;  || private member variable or function can not be accessed outside the class and also not in child class.
    cout <<"Z: " <<z <<endl;
    }
};

int main()
{
    Asian a1;
    a1.display();
}