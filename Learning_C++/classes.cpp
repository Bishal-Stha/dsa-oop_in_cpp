#include<iostream>
#include<graphics.h>
using namespace std;

class Chicken {
    private: 
    int price;
    public:
    void setPrice(int p){
        price = p;
    }

    void show_chickenPrice(){
        cout <<"Price is "<<price<<endl;
    }
};
//Encapsulation: Public, Private and Protected are three essential access modifiers. they are used to encapsulate classes.
class Employee{
    private: 
    int Id;
    string Name;
    string Position;

    public:
    // Class Constructor in C++
    Employee(string name, string position, int id){
        Id = id;
        Name = name;
        Position = position;
    }
    void employeeInfo(){
        cout<<"Id: "<<Id<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Position: "<<Position<<endl;
    }
};


int main()
{
    Chicken ck1;
    ck1.setPrice(1000);
    ck1.show_chickenPrice();

    Employee bishal("Bishal Shrestha","ML Engineer", 189);
    bishal.employeeInfo();
    return 0;
}