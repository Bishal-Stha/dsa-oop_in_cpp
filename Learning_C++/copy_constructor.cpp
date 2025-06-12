#include <iostream>
using namespace std;
class Student {
public:
string name;
int age;
// Parameterized constructor
Student(string n, int a) {
name = n;
age = a;
}
// Copy constructor
Student(const Student &s) {
name = s.name;
age = s.age;
}
void display() {
cout << "Name: " << name << ", Age: " << age << endl;
}
};
int main() {
Student s1("Ram", 21);
Student s2 = s1; // Copy constructor is called
s2.display();
s1.name = "Bishal";
s1.age = 40;
s1.display();
s2.display();
return 0;
}