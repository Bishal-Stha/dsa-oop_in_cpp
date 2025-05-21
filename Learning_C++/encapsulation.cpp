#include<iostream>
#include<string.h>
using namespace std;

class AbstractBank {
    virtual void bonus()=0;
};

class Bank:AbstractBank {
    private:
    float Bank_balance=0;

    public:
    
    void deposit_money(float deposit_amt){
        Bank_balance += deposit_amt;
    }

    void withdraw_money(float withdraw_amt){
        Bank_balance -= withdraw_amt;
    }
    
    void get_bank_balance(){
        cout <<"Bank Balance: "<<Bank_balance <<endl;
    }

    float check_bank_balance(){
        return Bank_balance;
    }

    void bonus(){
        cout <<"Bank Balance before: " <<Bank_balance <<endl;
        float bonus_amt = 0.05*Bank_balance;
        Bank_balance += bonus_amt;
        cout <<"Bank Balance after: " <<Bank_balance <<endl;
    }
};

int main()
{
    Bank sunrise;
    cout<<"Bank balance: " << sunrise.check_bank_balance() <<endl;
    sunrise.deposit_money(69000.0);
    cout<<"Bank balance: " << sunrise.check_bank_balance() <<endl;
    sunrise.deposit_money(11000.0);
    cout<<"Bank balance: " << sunrise.check_bank_balance() <<endl;
    sunrise.withdraw_money(40000);
    sunrise.get_bank_balance();
    sunrise.bonus();
}