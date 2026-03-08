#include "Book.h"

int main() {
	Book b1, b2;
	b1.setInfo();
	b1.borrowBook();
	b1.returnBook();
	b1.displayInfo();

	b2.setInfo();
	b2.borrowBook();
	b2.returnBook();
	b2.displayInfo();

	return 0;
}