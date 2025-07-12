#include <iostream>
using namespace std;

class Person {
public:
void sayHello() {
cout << "Hello from Person.\n";
}
};

class Student : virtual public Person { };
class Employee : virtual public Person { };

class WorkingStudent : public Student, public Employee {
    public:
    void sayHello() {
        cout <<"I don't obey the laws.";
    }
};

int main() {
WorkingStudent ws;
ws.sayHello(); // No ambiguity
}