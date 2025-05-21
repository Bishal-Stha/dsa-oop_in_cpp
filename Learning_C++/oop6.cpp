/*BITWISE OPERATIONS */
#include<iostream>
using namespace std;
int main()
{
    int x= 10;// 1010 (n=4) = 0101 =5
    //1111 = n=3  x<<
    int y = x <<10; //10*2^10 = 10240
    int z = x>>1; //10/2^1 = 5
    int a = ~x;

    int p = 5; //0101
    int q= 10; //1010
    //p&q = 0101 & 1010 = 0
    //p|q = 0101 & 1010 = 1111
    //p^q = 0101 ^ 1010 = 1111
    //~p = 1010

    cout <<y<<endl;
    cout <<z<<endl;
    cout <<a<<endl;
    cout <<(p&q)<<endl;
    cout <<(p|q)<<endl;
    cout <<(p^q)<<endl;
    cout <<(~p)<<endl;
}