#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
	string name;
	int accountNumber;
	double balance;
public:
	BankAccount(string name, int number, double initialBalance);
	void deposit(double amount);
	void withdraw(double amount);
	void displayBalance();
};