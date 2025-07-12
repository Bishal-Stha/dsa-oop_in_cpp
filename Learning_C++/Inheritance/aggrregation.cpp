#include<iostream>
using namespace std;

class Daddy {
    public:
    void says(){
        cout <<"I love you my son.";
    }
};

class Baby {
    private:
    Daddy *d;
    string name;

    public:
Baby(string name, Daddy *dad):name(name), d(dad){};

    void says(){
        cout <<"My name is "<<name <<"and my dad says ";
        d->says();
    }
    
};

int main(){
    Daddy d1;
    Baby b1("bishal",&d1);
    b1.says();

    return 0;
}