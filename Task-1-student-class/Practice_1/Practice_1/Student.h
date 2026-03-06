#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double grade;

public:
    Student(string name, int age, double grade);
    void displayInfo();
};