#include<iostream>
using namespace std;

int GCD(int x, int y){
    int rem;
    rem = x%y;
    if(rem ==0) return y;
    else return GCD(y,rem);
}

int main()
{
    int result = GCD(177,3);
    cout <<"GCD: " <<result <<endl;
    return 0;
}