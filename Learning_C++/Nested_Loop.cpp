#include<iostream>
using namespace std;

class A {

    public:
    class B {
        private:
        int num;
        
        public:
        void large(int a, int b){
            num = a>b ? a: b;
        }

        void largestNum(){
            cout <<"Largest Number: " << num << endl;
        }
    };

};

class Outer {
    private: 
    int x,y;
    
    public:
    class Inner {
        public:
    void set_x_y(Outer &o, int X, int Y){
        o.x = X;
        o.y = Y;
    }

    void printSum(Outer &o){
        int sum = o.x + o.y;
        cout <<"Sum is "<<sum <<endl;
    }

};

};


int main()
{
    A::B var1; 
    var1.large(10,20);
    var1.largestNum();

    Outer outerobj;
    Outer::Inner innerobj;
    innerobj.set_x_y(outerobj,45,5);
    innerobj.printSum(outerobj);
    return 0;
}