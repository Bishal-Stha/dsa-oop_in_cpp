#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,3,2,2,4,3,4};
    int num =0;
    for(int i=0; i<7; i++)
    {
        num ^= arr[i];
    }
    cout <<"number is "<<num<<endl;
    return 0;
}