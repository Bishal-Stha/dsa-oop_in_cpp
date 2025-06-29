#include<iostream>
using namespace std;

class ATM {
    private:
    string bank_name;
    double bank_balance = 0;
    long bank_account_number;
    string bank_branch;

    public:
    void set_bankName(string bankName){bank_name=bankName;}
    void set_bankBalance(double bankBalance){bank_account_number=bankBalance;}
    void set_bankAccountNo(long bankAccountNo){bank_account_number=bank_account_number;}
    void set_bankBranch(string bankBranch){bank_branch=bankBranch;}

    void deposit(ATM& a, double deposit_amt){
        string bname, bbranch;
        long bac;
        double bbalance;
        if(deposit_amt >0){
            cout<<"Enter bank name: ";
            cin >> bname;
            cout<<"Enter bank branch: ";
            cin >> bbranch;
            cout<<"Enter bank account number: ";
            cin >> bac;
            cout<<"Enter bank balance: ";
            cin >> bbalance;
            set_bankName(bname);
            set_bankBranch(bbranch);
            set_bankAccountNo(bac);
            set_bankBalance(bbalance);

        a.bank_balance += deposit_amt;
        }
        else
        cout <<"Invalid Balance" <<endl;
    }

    void withdraw(ATM& a, double withdraw_amt){
        if(withdraw_amt > 0 || withdraw_amt <= a.bank_balance){
        cout <<"\t\t\tATM TRANSACTION\t\t\t"<<endl;
        cout <<"\tBank Name:\t\t" <<bank_name<<endl;
        cout <<"\tBank Branch:\t\t" <<bank_branch<<endl;
        cout <<"\tAccount No:\t\t" <<bank_account_number<<endl;
        cout <<"\tBank Balance:\t\t" <<bank_balance<<endl;
        }
        else
        cout <<"Insufficient Balance." <<endl;
    }
};

int main(){
    ATM a;
    char choice;
    
    do {
        cout <<"ATM TRANSACTION" <<endl;
        cout <<"(W)ithdraw | (D)eposit  |   (E)xit\n";
        cout <<"Enter choice: ";
        cin >>choice;
        choice = toupper(choice);

        switch (choice)
        {
        case 'W':
        double wt_amt;
        cout <<"Enter withdraw amount: ";
        cin >>wt_amt;
            a.withdraw(a,wt_amt);
            break;

        case 'D':
        double dp_amt;
        cout <<"Enter deposit amount: ";
        cin >>dp_amt;
            a.withdraw(a,dp_amt);
            break;

        case 'E':
        break;
        
        default:
            break;
        }

    }
    while(choice != 'E');
}