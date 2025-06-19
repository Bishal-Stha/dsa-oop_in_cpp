#include <iostream>
using namespace std;
class Complex {
public:
int real, imag;
//  Complex(int r=0, int i=0): real(r),imag(i){} 
// This is short way to make constructor in C++.

Complex(int r = 0, int i = 0) {
real = r;
imag = i;
}

// Overloading + operator
Complex operator+(Complex c)
{
Complex temp;
temp.real = real + c.real;
temp.imag = imag + c.imag;
return temp;
}


void display() {
cout << real << " + " << imag << "i" << endl;
}
};

int main() {
Complex c1(2, 3), c2(4, 5), c3(1,2);
Complex c4 = c1 + c2 + c3; // calls overloaded + operator
c4.display(); // Output: 6 + 8i
return 0;
}