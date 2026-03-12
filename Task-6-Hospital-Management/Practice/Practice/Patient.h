#pragma once
#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
	string name;
	int age;
	string disease;
	string assignedDoctor;
public:
	void setInfo();
	string getName();
	void assignDoctor(string doctorName);
	void displayInfo();
};