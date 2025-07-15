/*
Problem Statement: Write a program to create a class named height with data members meter(int) and centimeter(int). Overload the binary + operator using friend function to add two heights.
*/

//Since I haven't read operator overloading with friend function, I'll do it without using friend function.

#include<iostream>
using namespace std;

class Height {
    public:
    int height_m;
    int height_cm;
    Height(int m,int cm):height_m(m),height_cm(cm){};
    Height(){}; //Empty constructor

    Height operator + (const Height &h2){
        Height temp;
        temp.height_m = height_m + h2.height_m;
        temp.height_cm = height_cm + h2.height_cm;

        if(temp.height_cm%100 >= 0){
            temp.height_m += (temp.height_cm/100);
            temp.height_cm = temp.height_cm%100;
        }
        return temp;
    }

    
};

int main(){
    Height h1(10,20), h2(5,75);
    Height h3;
    h3 = h1+h2;
    cout <<"height in meters: "<<h3.height_m <<endl;
    cout <<"height in centimeters: "<<h3.height_cm<<endl;
    cout <<h3.height_cm;
}



