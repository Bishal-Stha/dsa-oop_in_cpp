#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {17,7,3,8,1};
    int min;

    for(int i=0; i<arr.size(); i++)
    {
        min = arr[i];
        for(int j=i+1; j<arr.size(); j++)
        {
            if(min > arr[j])
            swap(min,arr[j]);
        }
        arr[i] =min;
    }

    for(int i=0; i<arr.size(); i++)
    cout <<arr[i]<<"\t";
    return 0;
}