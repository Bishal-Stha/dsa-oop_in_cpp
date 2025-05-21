#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numArr;
    char ch;
    int i=0;
    do {
        int value;
        cout <<"Enter value: ";
        cin >>value;
        numArr.push_back(value);
        i++;
        cout <<"enter n only if you want to end giving value: ";
        cin >>ch;
    }
    while(ch !='n' && ch!= 'N');

    for(int i=0; i<numArr.size(); i++)
    {
        cout <<numArr.at(i)<<endl;
    }
    return 0;
}