#include <iostream>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    double balance;

    void input() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void transfer(BankAccount &receiver, double amount) {
        if (amount <= 0) {
            cout << "Invalid amount.\n";
            return;
        }

        if (amount > balance) {
            cout << "Insufficient balance.\n";
            return;
        }

        balance -= amount;
        receiver.balance += amount;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount sender, receiver;
    double amount;

    cout << "Enter sender details:\n";
    sender.input();

    cout << "\nEnter receiver details:\n";
    receiver.input();

    cout << "\nEnter amount to transfer: ";
    cin >> amount;

    sender.transfer(receiver, amount);

    cout << "\nSender:\n";
    sender.display();

    cout << "\nReceiver:\n";
    receiver.display();

    return 0;
}