#include<iostream>
#include<fstream>
using namespace std;

class ATM {
    private:
    double balance =0;
    public:
    string accountNo, bankName, bankbranch;

    ATM(string accNo, string bank_name, string bank_branch, double bal=0):accountNo(accNo),bankName(bank_name), bankbranch(bank_branch), balance(bal){}

    void deposit(ATM& a, double dp_amt){
        try{
            if(dp_amt>=100)
            {
                // a1.balance += dp_amt;
                // cout <<"Rs. "<<dp_amt <<" is added to the account." <<endl;
                
                ofstream file("Deposit_recipt.txt");
            if(file.is_open()){
            file <<a.bankName <<" Bank " <<a.bankbranch <<" branch" <<endl;
            file <<"Date: 6/29/2025" <<endl;
            file <<"Account: "<<a.accountNo <<endl;
            file <<endl;
            file <<"Operation\t\t\tSuccess\n";
            file <<"Deposit\t\t\tAccount: "<<a.accountNo<<endl;
            file <<"Balance: "<<a.balance <<endl;
            file <<"Deposited amount: R.s "<<dp_amt <<endl;
            a.balance += dp_amt;
            file <<"Current balance: R.s "<<a.balance <<endl;
            file.close();
        }

        else {
            cerr <<"Unable to open file\n";
        }

            }
            else
            throw string("Deposit amount can not be less than 100.");
        }
    catch(exception e){
        cerr <<"Error: "<<e.what() <<endl;
    }
}

    void withdraw(ATM& a, double wt_amt){
        try{
            if(wt_amt >=100 && wt_amt < a.balance){
                ofstream file("Withdraw_recipt.txt");
        if(file.is_open()){
            file <<a.bankName <<" Bank " <<a.bankbranch <<" branch" <<endl;
            file <<"Date: 6/29/2025" <<endl;
            file <<"Account: "<<a.accountNo <<endl;
            file <<endl;
            file <<"Operation\t\t\tSuccess\n";
            file <<"Withdrawal\t\t\tAccount: "<<a.accountNo<<endl;
            file <<"Balance: "<<a.balance <<endl;
            file <<"Withdrawn amount: R.s "<<wt_amt <<endl;
            a.balance -= wt_amt;
            file <<"Current balance: R.s "<<a.balance <<endl;
            file.close();
        }

        else {
            cerr <<"Unable to open file\n";
        }
            }
            else
            throw string("Withdraw amount can not be less than 100.");
        }
        catch(exception e){
            cerr <<"Error: "<<e.what()<<endl;
        }
    }
};

int main(){
    ATM atm("01310200230669000001","Sunrise","Itahari");
    
    char choice;
    double deposit_amount, withdraw_amt;
    do {
        cout <<"(D)eposit\t(W)ithdraw\t(E)xit\n";
        cout <<"Enter choice: ";
        cin >>choice;
        choice = toupper(choice);

        switch (choice)
        {
        case 'D':
            cout <<"Enter deposit amount: ";
            cin >> deposit_amount;
            atm.deposit(atm,deposit_amount);
            break;

        case 'W':
            cout <<"Enter withdrawal amount: ";
            cin >> withdraw_amt;
            atm.withdraw(atm,withdraw_amt);
            break;
        
        default:
            break;
        }
    }
    while(choice != 'E');

    return 0;
}