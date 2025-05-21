#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers(100);
    // fill(numbers.begin(1),numbers.end(100),10);
    fill(numbers.begin(),numbers.end(),50);
    
    // int num =numbers.size();
    numbers.at(4) = 68;
    
    for(int i=0; i<numbers.size(); i++){
        cout<<"number is "<<numbers[i]<<endl;
    }

    cout<<sizeof(numbers)<<endl;
    cout<<numbers.front();
}