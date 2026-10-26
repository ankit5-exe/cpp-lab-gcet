#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string customerName;
    static int totalAccounts;
public:
    BankAccount(int accNum, string name) {
        accountNumber=accNum;
        customerName=name;

        totalAccounts++;
    }
    static void displayTotalAccounts() {
        cout << "Total Bank Accounts = " << totalAccounts << endl;
    }
};
int BankAccount::totalAccounts = 0;

int main(){

    BankAccount A1(3456, "Slade");
    BankAccount A2(2349,"Tweeker");

    BankAccount::displayTotalAccounts();
    return 0;

}