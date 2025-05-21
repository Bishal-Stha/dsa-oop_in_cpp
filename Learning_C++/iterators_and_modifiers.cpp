#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {10,15,20,25,30,35,40,45,50};
    vector<int>:: iterator it;

    for(it=v.begin(); it !=v.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}