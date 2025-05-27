/* Empty class: No member classes, No member function */

#include<iostream>
using namespace std;

class Empty {};

class somethingElse {
private: 
float length, breadth;
static int objCount;

public:
somethingElse(float l, float b){
objCount++;
length =l;
breadth = b;
}

 static void objectCount(){
    cout <<"Object count: " <<objCount << endl;
}

void area(){
    cout <<"Area: " <<length * breadth <<endl;
}

};

int somethingElse::objCount = 0;

int main()
{

    Empty e;
    cout <<"size: " <<"size of Class: "<< sizeof(Empty) <<endl;
    cout <<"size: " <<"size of Object: "<< sizeof(e) <<endl;

    somethingElse O1(10,20);
    somethingElse O12(10,20);
    somethingElse O13(10,20);
    somethingElse O10(10,20);
    somethingElse O21(10,20);
    somethingElse O31(10,20);
    somethingElse O41(10,20);
    somethingElse O61(10,20);
    somethingElse O71(10,20);
    somethingElse O81(10,20);
    O1.objectCount();

    cout <<"size of somethingElse class: " <<sizeof(somethingElse) <<endl;

    return 0;
}