#pragma once
#include <iostream>
#include <string>
using namespace std;

class Doctor {
private:
	string name;
	string specialization;
	bool isAvailable;
public:
	void setInfo();
	string getName();
	void displayInfo();
	void setAvailability(bool status);
	bool getAvailability();
};