#include<iostream>
using namespace std;

void divide(int num1, int num2) {
    if (num2 == 0) {
        throw runtime_error("Division by zero!");
    }
    cout << num1 << "/" << num2 << " = " << num1/num2 << endl;
}

int main()
{
    cout <<"Hello world"<<endl;
    try {
        int *p = new int[100000000]; //valid upto 10,00,00,000 
        cout <<"Memory Allocation Sucessful." <<endl;
        delete []p;
    }
    catch(const exception &e) {
        cout <<"Exception: "<<e.what();
    }

    int a=10,b=0;
    try {
        divide(a,b);
        throw runtime_error("Division by Zero!");        
    }
    catch(const exception err){
        cout <<"Exception: "<<err.what() <<"Error at line 22"<<endl;
    }
    cout <<"Hello again."<<endl;
    return 0;
}