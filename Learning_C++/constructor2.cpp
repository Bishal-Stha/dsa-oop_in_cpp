#include<iostream>
using namespace std;

class Student {
    public:
    int rollno;
    string name;

    //Empty Constructor
    Student(){};

    // Default Constructor
    Student(){
        cout <<"Constructor is Created." <<endl;
    }

    // Parameterized Constructor
    Student(int rollno, string name){
        this->name = name;
        this->rollno = rollno;
    }

    void student_details(){
        cout <<"Roll no: " <<rollno <<endl;
        cout <<"Student name: " <<name <<endl;
    }

    //Copy Constructor
    Student(Student &s){
        rollno = s.rollno;
        name = s.name;
        cout <<"Copy Constructor is called";
    }

};

int main(){
    
    Student s1(1,"Bishal");
    // Student s3(18, "Alex");
    Student s3(s1);
    s3.student_details();


}