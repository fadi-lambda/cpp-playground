#include "Product.h"

Product::Product() : name(""), price(0.0), quantity(0) {}

Product::Product(string name, double price, int quantity) : name(name), price(price), quantity(quantity) {}

void Product::setInfo() {
	cout << "Enter product price: ";
	cin >> price;
}

double Product::getTotalPrice() {
	return price * quantity;
}

void Product::displayProduct() {
	cout << "Product Name: " << name << endl;
	cout << "Price: $" << price << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Total Price: $" << getTotalPrice() << endl;
}

string Product::getName() {
	return name;
}

int Product::getQuantity() {
	return quantity;
}