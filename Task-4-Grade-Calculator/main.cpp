#include "Grade.h"

int main() {
	int n;

	cout << "Enter number of students: ";
	cin >> n;

	Student* s = new Student[n];

	for (int i = 0; i < n; i++) {
		cout << "\nEnter details for student " << i + 1 << endl;
		s[i].setInfo(n);
	}

	for (int i = 0; i < n; i++) {
		cout << "\nStudent " << i + 1 << " Information:\n";
		s[i].displayInfo();
	}

	return 0;
}