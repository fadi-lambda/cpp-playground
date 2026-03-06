#include "Student.h"

int main() {
    Student s1("Ali", 20, 3.8);
    Student s2("Sara", 19, 3.5);

    s1.displayInfo();
    cout << "-------------" << endl;
    s2.displayInfo();

    return 0;
}