#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
	private:
		string title;
		string author;
		double price;
		bool isAvailable;
	public:
		void setInfo();
		void borrowBook();
		void returnBook();
		void displayInfo();
};