#include<iostream>
using namespace std;

class Person {
    public:
    string name;
    int age;
    char gender;
    string address;
    void Intro() {
        cout<<"My name is " <<name <<endl;
    }
};

int main()
{
    Person p1;
    p1.name = "Bishal Shrestha";
    p1.age =18;
    p1.gender ='M';
    p1.address ="Itahari-18, Sunsari";
    p1.Intro();

}