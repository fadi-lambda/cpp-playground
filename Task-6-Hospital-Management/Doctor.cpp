#include "Doctor.h"

void Doctor::setInfo() {
	cout << "Enter Doctor's Name: ";
	getline(cin, name);
	cout << "Enter Doctor's Specialization (e.g. Cardiologist, Dentist): ";
	getline(cin, specialization);
}

string Doctor::getName() {
	return name;
}

void Doctor::displayInfo() {
	cout << "Doctor Name: " << name << endl;
	cout << "Doctor Specialization: " << specialization << endl;
	cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << endl;
}

void Doctor::setAvailability(bool status) {
	isAvailable = status;
}

bool Doctor::getAvailability() {
	return isAvailable;
}
