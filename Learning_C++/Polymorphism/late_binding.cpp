#include <iostream>
using namespace std;
class Apple {
    public:
    virtual void display() {
        cout <<"We have IOS" <<endl ;
    }
};

class Iphone: public Apple {
    void display(){
        cout <<"Iphone has IOS." <<endl;
    }
};

int main() {
    Apple *a;
    Iphone i;
    a = &i;
    a->display();
    return 0;
}