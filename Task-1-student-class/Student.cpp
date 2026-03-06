#include "Student.h"

Student::Student(string name, int age, double grade) {
    this->name = name;
    this->age = age;
    this->grade = grade;
}

void Student::displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
}