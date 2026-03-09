#include "Grade.h"

void Student :: setInfo(int n) {

	cin.ignore();

	cout << "Enter student name: ";
	getline(cin, name);

	cout << "Enter number of subjects: ";
	cin >> no_of_subjects;

	while (no_of_subjects <= 0) {
		cout << "Please enter correct number of subjects: ";
		cin >> no_of_subjects;
	}

	for (int i = 0; i < no_of_subjects; i++) {
		cout << "Enter marks for subject " << i + 1 << ": ";
		cin >> marks[i];

		while (marks[i] < 0 || marks[i] > 100) {
			cout << "Enter correct marks (0 - 100): ";
			cin >> marks[i];
		}
	}
}

double Student:: calculateAverage() {
	double total_marks = 0;
	for (int i = 0; i < no_of_subjects; i++) {
		total_marks += marks[i];
	}
	average = total_marks / no_of_subjects;
	return average;
}

void Student:: getGrade() {
	if (average >= 90) cout << "A";
	else if (average >= 80 && average <= 89) cout << "B";
	else if (average >= 70 && average <= 79) cout << "C";
	else if (average >= 60 && average <= 69) cout << "D";
	else if (average < 60) cout << "F";
	else cout << "Wrong Calculation!";
}

void Student:: displayInfo() {
	cout << "Name: " << name << endl;
	cout << "Average: " << calculateAverage() << endl;
	cout << "Grade: ";
	getGrade();
}