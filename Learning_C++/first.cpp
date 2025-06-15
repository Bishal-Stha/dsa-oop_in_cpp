#include<iostream>
using namespace std;

class Test {
    public: 
    string name;

    void hello_friend();

    Test(string name){
        this->name = name;
        cout <<name <<" is created." <<endl;
    }

    ~Test(){
        cout <<name<<" is destroyed" <<endl;
    }
};

int main(){

    // 3 variable => a,b,c => 3
    Test t1("alpha"), t2("beta"), t3("gama");
    // t1.hello_friend();

    cout <<"size of class:" <<sizeof(Test) <<endl;
    cout <<"size of t1: " <<sizeof(t1) <<endl;

    return 0;
}