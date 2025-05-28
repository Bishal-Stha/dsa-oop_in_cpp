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


int main(){
    Areas a;
    cout <<"Area of Circle: " << a.area(5.0f) <<endl;
    cout <<"Area of Square: " << a.area(5.0f, 10.0f) <<endl;
    cout <<"Area of Rectangle: " << a.area(5.0f,30.0f) <<endl;
    return 0;

}