#include<iostream>
using namespace std;

class Test {
    public: 
    string name;

    Test(string name){
        this->name = name;
        cout <<name <<" is created." <<endl;
    }

    ~Test(){
        cout <<name<<" is destroyed" <<endl;
    }
};

// 3 variable => a,b,c => 3

int main(){
    Test t1("alpha"), t2("beta"), t3("gama");
    return 0;
}