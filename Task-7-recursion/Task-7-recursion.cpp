#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}

int fibonacci(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}

int sum_of_digits(int n) {
	if (n == 0) return 0;
	else return (n % 10) + sum_of_digits(n / 10);
}

int reverse_of_number(int n, int result = 0) {
	if (n == 0) return result;
	else return reverse_of_number(n / 10, result * 10 + n % 10);
}

int main() {
	int number, choice;
	char play_again;
	
	do {
		cout << "1. Factorial" << endl;
		cout << "2. Fibonacci" << endl;
		cout << "3. Sum of Digits" << endl;
		cout << "4. Reverse of a number" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		
		while (choice < 1 || choice > 4) {
			cout << "Invalid Input! Select from (1-4): ";
			cin >> choice;
		}
		
		cout << "Enter a number: ";
		cin >> number;
		
		switch(choice) {
			case 1: cout << "Factorial of " << number << " is " << factorial(number) << "." << endl;
					break;
			case 2: cout << "Fibonacci of " << number << " is " << fibonacci(number) << "." << endl;
					break;
			case 3: cout << "Sum of digits of " << number << " is " << sum_of_digits(number) << "." << endl;
					break;
			case 4: cout << "Reverse of " << number << " is " << reverse_of_number(number) << "." << endl;
					break;
			default: cout << "Invalid Input!" << endl;
					break;
		}
		
		cout << "Want to play Again? (1 to play, 0 to quit): ";
		cin >> play_again;
		
		while (play_again != '0' && play_again != '1') {
			cout << "1 to play, 0 to quit: ";
			cin >> play_again;
		}
		
	} while (play_again == '1');
	
	cout << "Thanks for playing!" << endl;
	
	return 0;
}