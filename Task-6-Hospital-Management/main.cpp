#include "Hospital.h"
#include "Doctor.h"
#include "Patient.h"

int main() {
    Hospital hospital;

    // Create and add doctors
    Doctor d1, d2, d3;
    cout << "=== Adding Doctors ===" << endl;
    d1.setInfo();
    d2.setInfo();
    d3.setInfo();
    d1.setAvailability(true);
    d2.setAvailability(true);
    d3.setAvailability(true);
    hospital.addDoctor(d1);
    hospital.addDoctor(d2);
    hospital.addDoctor(d3);

    // Create and add patients
    Patient p1, p2, p3, p4;
    cout << "\n=== Adding Patients ===" << endl;
    p1.setInfo();
    p2.setInfo();
    p3.setInfo();
    p4.setInfo();
    hospital.addPatient(p1);
    hospital.addPatient(p2);
    hospital.addPatient(p3);
    hospital.addPatient(p4);

    // Assign doctors to patients
    cout << "\n=== Assigning Doctors ===" << endl;
    hospital.assignDoctorToPatient("Ali", "Dr. Ahmed");
    hospital.assignDoctorToPatient("Sara", "Dr. Khan");

    // Display everything
    cout << "\n=== All Doctors ===" << endl;
    hospital.displayAllDoctors();

    cout << "\n=== Available Doctors ===" << endl;
    hospital.displayAvailableDoctors();

    cout << "\n=== All Patients ===" << endl;
    hospital.displayAllPatients();

    return 0;
}