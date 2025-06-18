// Make a function that takes object as a parameter.

#include<iostream>
using namespace std;

class SmartPhone {
    public:
    float price;
    string brand;

    

    void displayPhone(){
        cout <<"Brand: " <<brand <<endl;
        cout <<"Price: " <<price <<endl;
    }
};

SmartPhone createClass(float price, string name ="Redmi"){
    SmartPhone s1;
    s1.brand = name;
    s1.price = price;
    return s1;
}

SmartPhone buyPhone(SmartPhone s1, float discount=10){
    float price = s1.price;
    s1.price = s1.price - s1.price*0.01*discount;
    return s1;
}

int main()
{
    SmartPhone s1 = createClass(100000);
    s1.displayPhone();
    s1 = buyPhone(s1,15);
    s1.displayPhone();
}