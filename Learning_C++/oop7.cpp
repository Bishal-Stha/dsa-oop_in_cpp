/*
sum of pair of all array.
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,1,3,-4,5,7};
    int sum=0;
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++){
            sum += arr[i]*arr[j];
            cout <<sum<<"\t";
        }
    }
    cout <<"sum is "<<sum<<endl;
}