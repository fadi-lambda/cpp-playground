#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int no_of_subjects;
	double marks[3];
	double average;
public:
	void setInfo(int n);
	double calculateAverage();
	void getGrade();
	void displayInfo();
};