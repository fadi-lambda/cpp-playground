#include "Book.h"

void Book :: setInfo() {
		cout << "Enter book title: ";
		getline(cin, title);
		cout << "Enter book author: ";
		getline(cin, author);
		cout << "Enter book price: ";
		cin >> price;
		cin.ignore();
		isAvailable = true;
	}
void Book :: borrowBook() {
		if (isAvailable) {
			isAvailable = false;
			cout << "You have borrowed: " << title << endl;
		}
		else {
			cout << "Sorry, " << title << " is currently unavailable." << endl;
		}
	}
void Book :: returnBook() {
		isAvailable = true;
		cout << "You returned: " << title << endl;
	}
void Book :: displayInfo() {
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Price: $" << price << endl;
		cout << "Availability: " << (isAvailable ? "Available" : "Unavailable") << endl;
}