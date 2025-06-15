#include<iostream>
using namespace std;

class Student {
    public:

    int rollno; //4
    string name; //24

    void Student_detail(float marks){ //4
        cout <<"Roll no: " <<this->rollno <<endl;
        cout <<"Name: " <<this->name <<endl;
        cout <<"Mark: " <<marks <<endl;
    }
};

int main()
{
    // cout <<sizeof(string)<<endl;
    // cout <<sizeof(int) <<endl;
    // cout <<sizeof(float)<<endl;
    Student s1;
    s1.name= "Bishal Shrestha";
    s1.rollno =18;
    cout <<sizeof(s1) <<endl; // ?28
    s1.Student_detail(68.64);
    cout <<sizeof(s1);// ? 32

}