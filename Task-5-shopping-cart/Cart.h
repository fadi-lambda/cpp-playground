#pragma once
#include "Product.h"
#include <iostream>

class Cart {
private:
	Product products[10];
	int itemCount = 0;
	double discountPercent = 0.0;
public:
	void addProduct(Product p);
	void removeProduct(string name);
	void applyDiscount(string code);
	void showSummary();
};