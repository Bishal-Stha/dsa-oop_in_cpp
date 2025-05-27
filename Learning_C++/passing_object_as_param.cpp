#include<iostream>
using namespace std;

class Student {
public:
int age;
string name;

void st_fn(Student s1, Student s2){
    int totalAge = s1.age + s2.age;
    cout <<"Total_age: "<<totalAge <<endl;
    cout <<"Concat names: " <<s1.name <<s2.name <<endl;
}

};

int main()
{
Student s1, s2;
s1.age = 20;
s1.name = "Bishal";
s2.age = 18;
s2.name = "Dipak";

s1.st_fn(s1,s2);

}