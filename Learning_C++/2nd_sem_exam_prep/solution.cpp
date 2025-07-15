#include<iostream>
using namespace std;

class Person {
    protected:
    int age;
    float salary;
    public:
    Person(int age, float salary){
        this->age = age;
        this->salary = salary;
    };

    void display(){
        cout <<"Person Print Statements"<<endl;
        cout <<"Age: "<<age<<endl;
        cout <<"Salary: "<<salary<<endl;
        cout <<endl;
    }
};

class Student: protected Person {
    protected:
    int sid;
    float CGPA;

    public:
    Student(int age, float salary,int  sid, float CGPA): Person(age,salary){
        this->sid = sid;
        this->CGPA = CGPA;
    }

    void display(){
        cout <<"Student Print Statements"<<endl;
        cout <<"Age: "<<age<<endl;
        cout <<"Salary: "<<salary<<endl;
        cout <<"sid: "<<sid<<endl;
        cout <<"CGPA: "<<CGPA<<endl;
        cout <<endl;
    }
};

class Doctor: protected Person {
    protected:
    int did;
    char h_name;
    public:
    Doctor(int age, float salary,int did,char h_name): Person(age,salary){
        this->did = did;
        this->h_name = h_name;
    }

    void display(){
        cout <<"Doctor Print Statements"<<endl;
        cout <<"Age: "<<age<<endl;
        cout <<"Salary: "<<salary<<endl;
        cout <<"did: "<<did<<endl;
        cout <<"h name: "<<h_name<<endl;
        cout <<endl;
    }
};

class Clerk: protected Person {
    public:
    Clerk(int age, float salary): Person(age,salary){};

    void display(){
        cout <<"Clerk Print Statements"<<endl;
        cout <<"Age: "<<age<<endl;
        cout <<"Salary: "<<salary<<endl;
        cout <<endl;
        
    }
};

int main(){

    Person P(18,34000.43);
    Student S(20,0.0,32,3.5);
    Doctor Dr(32,78000.56,2421,'X');
    Clerk C(18,34000.0);

    P.display();
    S.display();
    Dr.display();
    C.display();
    return 0;
}