#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string name, int accNum, double initialBalance) {
        accountHolder = name;
        accountNumber = accNum;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds! Current balance: $" << balance << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrew $" << amount << endl;
        }
    }

    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Holder: " << accountHolder << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    // Initializing account with Name, Acc No, and Initial Deposit
    BankAccount myAcc("John Doe", 554422, 1000.00);

    int choice;
    double amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                myAcc.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                myAcc.withdraw(amount);
                break;
            case 3:
                myAcc.display();
                break;
            case 4:
                cout << "Exiting system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
