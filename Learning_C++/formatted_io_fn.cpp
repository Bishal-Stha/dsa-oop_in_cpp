#include<iostream>
#include<cmath>
#include<iomanip>

int main(){
    std::cout <<M_PI <<std::endl;
    std::cout.precision(50); // Won't give higher precision than this. Actually it does. it gives this with last 7188 instead of 71875
    std::cout <<M_PI <<std::endl;

    std::cout.width(10);
    std::cout<<"Hi"<<std::endl;
}