/*
create a vector of size 10 which can store boolean values and populate this vector with all 0s.
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<bool> boolean(10,0);
    for(int i=0; i<boolean.size()+100; i++)
    {
        cout<<boolean.at(i)<<endl;
    }
}