#include<iostream>
using namespace std;
int main()
{
    // dynamic memory = Memory that is allocated after the program is already compiled and running.
    // Use the 'new' operator to allocate memory in the heap rather than the stack.

    // Useful when we don't know how much memory we'll need. Makes our programs more flexible, especially when accepting user inputs.

    int *ptr;

    ptr = new int;

    *ptr = 69;
    cout <<"Address: "<<ptr<<endl;
    cout <<"Value: "<<*ptr<<endl;

    int n;
    cout <<"how many names you wanna enter: ";
    cin >> n;
    string *str = new string[n];

    for(int i=0; i<n; i++){
        cout<<"Enter name: ";
        cin >> str[i];
    }

    for(int i=0; i<n; i++){
        cout <<str[i] <<endl;
    }

    delete ptr;
    delete[] str;
    return 0;
}