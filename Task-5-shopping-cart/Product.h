#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product {
private:
	string name;
	double price;
	int quantity;
public:
	Product();
	Product(string name, double price, int quantity);
	void setInfo();
	double getTotalPrice();
	void displayProduct();
	string getName();
	int getQuantity();
};