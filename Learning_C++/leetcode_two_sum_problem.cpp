#include<iostream>
using namespace std;

int main()
{
    int target=18;
    int correctness=0;
    int arr[] = {2,7,11,15};
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(arr[i]+arr[j] ==target){
            printf("indices is %d and %d\n",i,j);
            correctness++;
        }
    }
    }
    if(correctness <0)
    printf("target is not found.");
    return 0;
}