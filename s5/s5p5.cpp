#include <iostream>
#include <string>
using namespace std;

class Account {


protected:
    string accountNumber;
    double balance;
    
public:
    Account(string acc, double bal)  {
        AccountNumber=acc;
        balance=bal;
    }
    virtual void display() {
        cout << "Account: " << accountNumber << ", Balance: $" << balance << endl;
    }
};

class SavingsAccount : public Account {

private:
    double interestRate;


    public:


    SavingsAccount(string acc, double bal, double rate) 
 {
    Account(acc,bal)
        interestRate=rate; }
    
    void display() override {
        cout << "[Savings] Account: " << accountNumber 
             << ", Balance: $" << balance << ", Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public Account {

private:
    double overdraftLimit;


    public:
    CurrentAccount(string acc, double bal, double limit) 
         {Account(acc, bal)
        
        overdraftLimit=limit;}
    
    void display() override {
        cout << "[Current] Account: " << accountNumber 
             << ", Balance: $" << balance << ", Overdraft Limit: $" << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount sAcc("SAV-101", 5000.0, 4.5);
    CurrentAccount cAcc("CUR-202", 1500.0, 1000.0);
    
    sAcc.display();
    cAcc.display();
    return 0;
}