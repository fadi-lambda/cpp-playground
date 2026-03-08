#include "BankAccount.h"

BankAccount::BankAccount(string name, int number, double initialBalance) {
    this->name = name;
    accountNumber = number;
    balance = initialBalance;
}

void BankAccount::deposit(double amount) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
}

void BankAccount::withdraw(double amount) {
    if (amount > balance) {
        cout << "Insufficient funds!" << endl;
    }
    else {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }
}

void BankAccount::displayBalance() {
    cout << "Account Holder: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
}