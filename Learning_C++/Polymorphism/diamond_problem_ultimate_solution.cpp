#include<iostream>
using namespace std;

class Person {
    public:
    virtual void speak()
    {
        cout <<"I am a person."<<endl;
    }

};

class Student: virtual public Person{
    public:
    void speak(){
        cout <<"I am a Student."<<endl;
    }
};

class Leader: virtual public Person{
    public:
    void speak(){
        cout <<"I am a Leader."<<endl;
    }
};

class Student_Leader: public Student, public Leader{
    public:
    void speak(){
        cout <<"I am a Student Leader."<<endl;
    }
};

int main(){
    Person *p;
    Student_Leader sl;
    p = &sl;
    p->speak();
    
}