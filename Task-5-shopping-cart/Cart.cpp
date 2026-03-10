#include "Cart.h"

void Cart::addProduct(Product p) {
	if (itemCount < 10) {
		products[itemCount] = p;
		itemCount++;
	}
	else {
		cout << "Cart is full!" << endl;
	}
}

void Cart::removeProduct(string name) {
	for (int i = 0; i < itemCount; i++) {
		if (products[i].getName() == name) {
			for (int j = i; j < itemCount - 1; j++) {
				products[j] = products[j + 1];
			}
			itemCount--;
			cout << "Product removed." << endl;
			return;
		}
	}
	cout << "Product not found." << endl;
}

void Cart::applyDiscount(string code) {
	if (code == "SAVE10") {
		discountPercent = 10.0;
	}
	else if (code == "SAVE20") {
		discountPercent = 20.0;
	}
	else if (code == "SAVE50") {
		discountPercent = 50.0;
	}
	else {
		cout << "Invalid discount code." << endl;
		return;
	}
	cout << "Discount applied: " << discountPercent << "%" << endl;
}

void Cart::showSummary() {
	double grandTotal = 0.0;
	cout << "==== = CART SUMMARY ==== =" << endl;
	for (int i = 0; i < itemCount; i++) {
		cout << i + 1 << ".	" << products[i].getName() << "		" << products[i].getQuantity() << "x	 $" << products[i].getTotalPrice() << endl;
	}
	cout << "------------------------" << endl;
	for (int i = 0; i < itemCount; i++) {
		grandTotal += products[i].getTotalPrice();
	}
	double discountAmount = (grandTotal * discountPercent) / 100;
	cout << "Subtotal:       $" << grandTotal << endl;
	cout << "Discount(" << discountPercent << "%) : -$" << discountAmount << endl;
	cout << "Grand Total  :  $" << (grandTotal - discountAmount) << endl;
	cout << "========================" << endl;
}