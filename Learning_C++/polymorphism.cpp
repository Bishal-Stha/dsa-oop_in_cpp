/*
Non-overloadable operators in C++
?:, ::, sizeof()
rest of the operators can be overloaded in C++.
*/

#include<iostream>
using namespace std;

#define PI 3.14

// Function Overloading
class Areas {
    public:
    float area(float radius){
        return PI * radius* radius;
    }

    float area(int length){
        return length * length;
    }

    float area(int length, int width){
        return length * width;
    }
};

//Operator Overloading
class Complex {
    int real, img;

    public:

    Complex(){
        //Default constructor so that ans can be initialized.
    }

    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void display(){
        cout <<real <<" + i" <<img <<endl;
    }

    Complex operator + (Complex &C){
        Complex ans;
        ans.real = real +C.real;
        ans.img = img + C.img;
        return ans;
    }

};

int main(){
    
    //Polymorphism ___
    Areas a;
    cout <<"Area of Circle: " << a.area(5.0f) <<endl;
    cout <<"Area of Square: " << a.area(5.0f, 10.0f) <<endl;
    cout <<"Area of Rectangle: " << a.area(5.0f,30.0f) <<endl;

    //Operator Overloading ___
    Complex C1(5,6);
    Complex C2(4,3);
    Complex C3 = C1+C2;
    C3.display();
    //Gives error because one object can not directly interact with another.
    //for that we need operator overloading.
    // Complex C3 = C1+C2;
    // C3.display();



    return 0;

}