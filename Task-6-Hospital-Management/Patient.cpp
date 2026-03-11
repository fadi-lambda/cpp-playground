#include "Patient.h"

void Patient::setInfo() {
	cout << "Enter patient's name: ";
	getline(cin, name);
	cout << "Enter patient's age: ";
	cin >> age;
	cin.ignore();
	cout << "Enter patient's disease: ";
	getline(cin, disease);
	cout << "Enter assigned doctor: ";
	getline(cin, assignedDoctor);
}

string Patient::getName() {
	return name;
}

void Patient::assignDoctor(string doctorName) {
	assignedDoctor = doctorName;
}

void Patient::displayInfo() {
	cout << "Patient Name: " << name << endl;
	cout << "Patient Age: " << age << endl;
	cout << "Patient Disease: " << disease << endl;
	cout << "Assigned Doctor: " << assignedDoctor << endl;
}