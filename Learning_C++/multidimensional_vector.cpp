#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vec1;
    for(int i=0; i<2; i++)
    {
            // cout <<"Enter " <<vec1[i][j] <<endl;
            int temp;
            cout <<"Enter value: ";
            cin >> temp;
            vec1.push_back(temp);
    }

    for(int i=0; i<vec1.size(); i++)
    {
        cout <<vec1.at(i)<<endl;
    }

}
