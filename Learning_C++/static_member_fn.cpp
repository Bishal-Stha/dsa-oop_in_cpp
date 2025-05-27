/* Empty class: No member classes, No member function */

#include<iostream>
using namespace std;

class somethingElse {
private: 
float length, breadth;
static int objCount;

public:
// somethingElse(float l, float b){
// objCount++;
// length =l;
// breadth = b;
// }

somethingElse(float length, float breadth){
    objCount++;
    this->length = length;
    this->breadth = breadth;
}

 static void objectCount(){
    cout <<"Object count: " <<objCount << endl;
}

void area(){
    cout <<"Area: " <<length * breadth <<endl;
}

};

class Bank {
private:
string name;
int acc_num;
float bank_balance;

static int totalCustomers;
static int totalBalance;

public:
Bank(string name,int acc_num,float bank_balance) {
    totalCustomers++;
    this->name = name;
    this->acc_num = acc_num;
    this->bank_balance = bank_balance;
    totalBalance += bank_balance;
}

static void customerCount(){
    cout <<"total customers: " <<totalCustomers <<endl;
}

static void totalBankBalance(){
    cout <<"total bank balance: " <<totalBalance <<endl;
}

void deposit(float amount){
    if(amount >0){
        this->bank_balance += amount;
        totalBalance += amount;
    }
}

void withdraw(float amount){
    try {
        if(amount >0 && amount < this->bank_balance){
        this->bank_balance -= amount;
        totalBalance -= amount;
    }
    throw string("Warning: \nWithdrawl amount exceeds bank balance.");
    }
    catch(string err) {
        cerr <<"Error: " <<err <<endl;
    }
}

void bankStatement(){
    cout <<"Name: " <<this->name <<endl;
    cout <<"Account Number: " <<this->acc_num <<endl;
    cout <<"Bank Balance: " <<this->bank_balance <<endl;
}


};

int somethingElse::objCount = 0;
int Bank::totalCustomers =0;
int Bank::totalBalance =0;

int main()
{
    somethingElse O1(10,20);
    somethingElse O12(10,20);
    somethingElse O81(10,20);
    O1.objectCount();

    cout <<"size of somethingElse class: " <<sizeof(somethingElse) <<endl;

    cout <<endl;

    Bank b1("Bishal shrestha",9012, 1200);
    b1.deposit(13800);
    b1.withdraw(50000);
    b1.bankStatement();
    
    Bank b2("Shree Kumari shrestha",8137, 1500);
    b2.deposit(3500);
    b2.withdraw(6000); //b2 doesn't have 6000 in bankbalance so, 6000 won't be deducted.
    b2.bankStatement();
    

    b1.customerCount();
    b1.totalBankBalance();
    cout <<endl;

    return 0;
}