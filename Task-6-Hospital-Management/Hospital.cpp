#include "Hospital.h"


void Hospital::addDoctor(Doctor d) {
	if (doctorCount >= 5) {
		cout << "Hospital is full!" << endl;
	}
	else {
		doctors[doctorCount] = d;
		doctorCount++;
	}
}

void Hospital::addPatient(Patient p) {
	if (patientCount >= 10) {
		cout << "No more patients can be admitted!" << endl;
	}
	else {
		patients[patientCount] = p;
		patientCount++;
	}
}

void Hospital::assignDoctorToPatient(string patientName, string doctorName) {
	for (int i = 0; i < patientCount; i++) {
		if (patients[i].getName() == patientName) {
			for (int j = 0; j < doctorCount; j++) {
				if (doctors[j].getName() == doctorName) {
					patients[i].assignDoctor(doctorName);
					doctors[j].setAvailability(false);
					cout << doctorName << " assigned to " << patientName << "." << endl;
					return;
				}
			}
			cout << "Doctor Not Found!" << endl;
			return;
		}
	}
	cout << "Patient Not Found!" << endl;
}

void Hospital::displayAllDoctors() {
	for (int i = 0; i < doctorCount; i++) {
		doctors[i].displayInfo();
		cout << "------------------------" << endl;
	}
}

void Hospital::displayAllPatients() {
	for (int i = 0; i < patientCount; i++) {
		patients[i].displayInfo();
		cout << "------------------------" << endl;
	}
}

void Hospital::displayAvailableDoctors() {
	cout << "Available Doctors: " << endl;
	for (int i = 0; i < doctorCount; i++) {
		if (doctors[i].getAvailability()) {
			doctors[i].displayInfo();
			cout << "------------------------" << endl;
		}
	}
}