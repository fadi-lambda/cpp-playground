#include "Cart.h"

int main() {
	Product p1("Laptop", 999.99, 1);
	Product p2("Mouse", 25.50, 2);
	Product p3("Keyboard", 45.00, 1);
	Product p4("Monitor", 300.00, 1);

	Cart cart;
	cart.addProduct(p1);
	cart.addProduct(p2);
	cart.addProduct(p3);
	cart.addProduct(p4);

	cart.applyDiscount("SAVE10");
	cart.removeProduct("Mouse");
	cart.showSummary();

	return 0;
}
