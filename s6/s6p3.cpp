#include <iostream>
#include <stdexcept>

using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initial_balance) : balance(initial_balance) {}
    
    void withdraw(double amount) {
        if (amount > balance) {
            throw runtime_error("Error: Insufficient Balance.");
        }
        balance -= amount;
        cout << "Withdrawal successful. Remaining Balance: " << balance << endl;
    }
    
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(5000);
    double withdraw_amount;
    
    cout << "Balance: " << account.getBalance() << endl;
    cout << "Withdraw: ";
    cin >> withdraw_amount;

    try {
        account.withdraw(withdraw_amount);
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}