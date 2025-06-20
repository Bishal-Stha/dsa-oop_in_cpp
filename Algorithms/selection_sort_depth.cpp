#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {17,7,3,8,1};
    int minIdx;
    
    for(int i=0; i<arr.size(); i++)
    {
        minIdx = i;
        for(int j=i+1; j<arr.size(); j++)
        {
            if(arr[minIdx] > arr[j])
            minIdx =j;
        }
        swap(arr[i],arr[minIdx]);
    }

    for(int i=0; i<arr.size(); i++)
    cout <<arr[i] <<endl;
    return 0;
}