#include<iostream>
using namespace std;

class Animal {
    public:
    virtual void info()=0;
};

class Mammal: public Animal {
    public:
    void info(string species, int limbs){
        cout <<species <<" is a mammal and it " <<" has " <<limbs <<" limbs." <<endl;
    }

    void info() override {
        cout <<"This Mammal Class."<<endl;
    }
};

class Amphibian: public Animal {
    public:
    void info(string species, bool canFly){
        string text = canFly ? "can fly.": "can not fly.";
        cout <<species <<" is an amphibian and it "<<text<<endl;
    }

    void info() override {
        cout <<"This is Amphibian Class."<<endl;
    }
};

class Bat: public Mammal, public Amphibian{
    public:
    void info() override{
        cout <<"This is Bat Class." <<endl;
    }

    void info(string species, bool drinksBlood=true){
        string text = drinksBlood ? "It drinks blood.": "It doesn't drink blood.";
        cout <<species <<" is a Bat species and "<<text <<endl;
    }
};

int main()
{
    Bat b;
    b.Mammal::info();
    b.Amphibian::info();
    b.Mammal::info("Tiger",4);
    b.Amphibian::info("Eagle",false);
    b.info();
    b.info("Vampire bat");
}