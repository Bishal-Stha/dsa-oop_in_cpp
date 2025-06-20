#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {17,7,3,4,1,8,5,10,6,2};
    int temp;
    
    for(int i=0; i<arr.size()-1; i++)
    {
        for(int j=0; j<arr.size()-i-1; j++){
            if(arr[j]>arr[j+1])
            {
                // temp =arr[j];
                // arr[j] = arr[j+1]; 
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout <<"Sorted Array: ";
    for(int i=0; i<arr.size(); i++){
    cout <<arr[i] <<" ";
    }
    return 0;
}