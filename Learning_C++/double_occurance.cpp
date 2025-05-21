#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,2,4,6};
    int num=0;
    for(int i=0; i<5; i++)
    {
        num = ~(num^arr[i]);
    }
    cout<<"number is "<<num<<endl;
    return 0;
}