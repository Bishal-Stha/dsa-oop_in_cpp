#include<iostream>
using namespace std;

int sum(int a, int b=5){
    return a+b;
}

int main(){
    int result = sum(10);
    cout <<"Result: " <<result <<endl;

    cout <<"Result2: " <<sum(10,20) <<endl;
    return 0;
}