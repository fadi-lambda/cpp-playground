#pragma once
#include "Doctor.h"
#include "Patient.h"
#include <iostream>
#include <string>
using namespace std;

class Hospital {
private:
	Doctor doctors[5];
	Patient patients[10];
	int doctorCount = 0;
	int patientCount = 0;
	string hospitalName;

public:
	void addDoctor(Doctor d);
	void addPatient(Patient p);
	void assignDoctorToPatient(string patientName, string doctorName);
	void displayAllDoctors();
	void displayAllPatients();
	void displayAvailableDoctors();
};