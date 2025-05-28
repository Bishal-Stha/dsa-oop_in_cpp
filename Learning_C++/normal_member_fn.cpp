 #include <iostream>
 using namespace std;
 ////////////////////////////////////////////////////////////////
 class Base                       //base class
 {
 public:
 void show()                //normal function
 {
     cout << "Base \n" ; 
    }
 };
 ////////////////////////////////////////////////////////////////
 class Derv1 : public Base        //derived class 1
 {
 public:
 void show()
 { 
    cout << "Derv1\n";
 }
 };
 ////////////////////////////////////////////////////////////////
 class Derv2 : public Base        //derived class 2
 {
 public:
 void show()
 {
     cout << "Derv2\n";
     }
 };
 ////////////////////////////////////////////////////////////////
 int main()
 {
//  Derv1 dv1;           //object of derived class 1
//  Derv2 dv2;           //object of derived class 2
//  Base* ptr;           //pointer to base class
//  ptr = &dv1;          //put address of dv1 in pointer
//  ptr->show();         //execute show()

//  ptr = &dv2;          //put address of dv2 in pointer
//  ptr->show();         //execute show()

Derv1 d1;
Base *ptr;

ptr = &d1; // pointer le Derv1 ko object d1 ma baseko xa. So, we'll guess that ptr->show() will give Derv1.
// But this doesn't happens actually. It returns Base
ptr->show();

 return 0;
 }
