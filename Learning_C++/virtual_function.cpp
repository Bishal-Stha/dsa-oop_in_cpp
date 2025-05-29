#include<iostream>
#include<vector>
using namespace std;

class Animal {
    public:
    void speak(){
        cout <<"Attack"<<endl;
    }
};

class Dog: public Animal {
    public:
    void speak(){
        cout <<"Hoof!" <<endl;
    }
};

class Alien {
    public:
    //I don't want my alien class to speak anything, so i am making speak a pure virtual function.
    // virtual void speak(){
    //     cout <<" (:_:)"<<endl;
    //     cout <<" |}={|" <<endl;
    // }
    virtual void speak()=0;
};

class Jadoo: public Alien {
    public:
    void speak(){
        cout <<"Dhoop" <<endl;
    }
};

class Predator: public Alien {
    public:
    void speak(){
        cout <<"Eat em all" <<endl;
    }
};

class Symbiote: public Alien {
    public:
    void speak(){
        cout <<"We're Venom." <<endl;
    }
};

int main(){
    Animal *ptr;
    ptr = new Dog();
    ptr->speak();

    Alien *p;
    p = new Jadoo();
    p->speak();

    cout <<endl;

    vector <Alien*> aliens;
    aliens.push_back(new Jadoo());
    aliens.push_back(new Predator());
    // aliens.push_back(new Alien()); 
    //but after making speak a pure virtual funciton, i can't make an object of Alien class, it will not affect child classes like Symbiote, Predator or Jadoo.
    aliens.push_back(new Symbiote());
    aliens.push_back(new Predator());
    aliens.push_back(new Jadoo());

    for(int i=0; i<aliens.size(); i++){
        aliens[i]->speak();
    }
}