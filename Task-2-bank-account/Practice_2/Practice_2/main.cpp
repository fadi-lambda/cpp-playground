#include "BankAccount.h"

int main() {
	BankAccount account1("Ali", 1001, 1000);
	BankAccount account2("Fahad", 1002, 2000);

	account1.deposit(1000);
	account1.withdraw(500);
	account1.displayBalance();

	account2.deposit(1000);
	account2.withdraw(500);
	account2.displayBalance();

	return 0;
}