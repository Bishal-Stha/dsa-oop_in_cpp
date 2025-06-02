/*
In this project, I will implement features such as bank balance, withdrawal, deposit, total number of customers, and the bank's total balance. Additionally, I will include functionality for sending and receiving money between objects, with proper exception handling.
At the end fined with the help of LLM.
*/

#include<iostream>
using namespace std;

class Bank {
    static int total_customers;
    static int bank_balance;

private:
    int acc_num;
    string cust_name;
    float balance;

public:
    Bank(int acc_num, const string &cust_name, float balance) {
        total_customers++;
        this->acc_num = acc_num;
        this->cust_name = cust_name;
        this->balance = balance;
        bank_balance += balance;
    }

    void deposit(float depAmt) {
        try {
            if (depAmt > 0) {
                balance += depAmt;
                bank_balance += depAmt;
            } else {
                throw string("Warning: \nDeposit amount cannot be negative.");
            }
        } catch (string err) {
            cerr << "Error: " << err << endl;
        }
    }

    void withdraw(float withdAmt) {
        try {
            if (withdAmt > 0 && withdAmt <= balance) {
                balance -= withdAmt;
                bank_balance -= withdAmt;
            } else {
                throw string("Warning: \nWithdrawal amount exceeds bank balance.");
            }
        } catch (string err) {
            cerr << "Error: " << err << endl;
            cout << "Balance: " << this->balance << endl;
        }
    }

    void sendMoney(Bank &receiver, float amount) {
        try {
            if (this->balance >= amount) {
                receiver.balance += amount;
                this->balance -= amount;
                // bank_balance remains unchanged
            } else {
                throw string("Amount exceeds sender's bank balance.");
            }
        } catch (string err) {
            cerr << "Error: " << err << endl;
            cout << "Balance: " << this->balance << endl;
        }
    }

    void bankStatement() const {
        cout << "Bank Statement" << endl;
        cout << "Account No: " << this->acc_num << endl;
        cout << "Name: " << this->cust_name << endl;
        cout << "Balance: " << this->balance << endl;
    }

    static void totalBankBalance() {
        cout << "Total Balance of bank: " << bank_balance << endl;
    }

    static void totalCustomerCount() {
        cout << "Total Number of Customers: " << total_customers << endl;
    }
};

int Bank::bank_balance = 0;
int Bank::total_customers = 0;

int main() {
    Bank bank1(1075, "Bishal Shrestha", 7000);
    Bank bank2(1123, "Bibek Shrestha", 1000);
    cout << endl;

    bank1.deposit(73000);
    bank1.withdraw(30000);
    bank1.bankStatement();
    cout << endl;

    bank2.deposit(5000);
    bank2.bankStatement();
    cout << endl;

    bank1.sendMoney(bank2, 20000);
    bank1.bankStatement();
    cout << endl;
    bank2.bankStatement();
    cout << endl;

    Bank::totalBankBalance();
    Bank::totalCustomerCount();

    return 0;
}
