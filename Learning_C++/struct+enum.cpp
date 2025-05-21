#include<iostream>
using namespace std;

enum Position {Teacher, Student, Principal};
struct CollegeRegister {
    string name;
    string address;
    Position post;
};

int main()
{
    string postStr[] = {"Teacher", "Student", "Principal"};
    CollegeRegister cr1;
    cr1.name ="Bishal Shrestha";
    cr1.address = "Itahari=18, Sunsari";
    cr1.post = Student;

    cout<<"Name: " <<cr1.name <<endl;
    cout<<"Address: " <<cr1.address <<endl;
    cout<<"Position: " <<postStr[cr1.post] <<endl;

    return 0;
}