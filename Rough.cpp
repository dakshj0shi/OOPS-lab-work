#include<iostream>
#include<string>
using namespace std;

// Patient class definition
class Patient {
    long p_id;
    string name;
    int age;
    string disease;
    int roomNo;

public:
    // Default constructor
    Patient() : p_id(0), name(""), age(0), disease(""), roomNo(0) {}

    // Parameterized constructor
    Patient(long p_id, string name, int age, string disease, int roomNo) {
        this->p_id = p_id;
        this->name = name;
        this->age = age;
        this->disease = disease;
        this->roomNo = roomNo;
    }

    // Function to display patient details
    void display() {
        cout << "Patient ID: " << p_id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
        cout << "Room No: " << roomNo << endl;
        cout << "--------------------------" << endl;
    }

    // Getter for patient ID
    long getPatientID() {
        return p_id;
    }

    // Getter for patient name
    string getName() {
        return name;
    }
};

// Array of patient pointers
Patient* arr[100];
int count = 0;

// Hospital class definition
class Hospital {
public:
    // Add a new patient to the array
    void addPatient(long p_id, string name, int age, string disease, int roomNo) {
        if (count < 100) {
            arr[count] = new Patient(p_id, name, age, disease, roomNo);
            count++;
            cout << "Patient added successfully!" << endl;
        } else {
            cout << "Hospital is at full capacity. Cannot add more patients." << endl;
        }
    }

    // Display all patients
    void displayPatients() {
        if (count == 0) {
            cout << "No patients in the hospital." << endl;
        } else {
            for (int i = 0; i < count; i++) {
                arr[i]->display();
            }
        }
    }

    // Search for a patient by ID
    bool searchPatient(long p_id) {
        for (int i = 0; i < count; i++) {
            if (arr[i]->getPatientID() == p_id) {
                arr[i]->display();
                return true;
            }
        }
        cout << "Patient with ID " << p_id << " not found." << endl;
        return false;
    }

    // Delete a patient by ID
    void deletePatient(long p_id) {
        for (int i = 0; i < count; i++) {
            if (arr[i]->getPatientID() == p_id) {
                delete arr[i];  // Free the memory
                for (int j = i; j < count - 1; j++) {
                    arr[j] = arr[j + 1];  // Shift the array elements
                }
                count--;
                cout << "Patient with ID " << p_id << " deleted successfully!" << endl;
                return;
            }
        }
        cout << "Patient with ID " << p_id << " not found." << endl;
    }
};

int main() {
    Hospital h;

    // Add patients
    h.addPatient(1001, "John Doe", 45, "Flu", 101);
    h.addPatient(1002, "Jane Smith", 30, "Diabetes", 102);
    h.addPatient(1003, "Mike Johnson", 50, "Heart Disease", 103);

    // Display all patients
    cout << "\nDisplaying all patients:" << endl;
    h.displayPatients();

    // Search for a patient
    cout << "\nSearching for patient with ID 1002:" << endl;
    h.searchPatient(1002);

    // Delete a patient
    cout << "\nDeleting patient with ID 1002:" << endl;
    h.deletePatient(1002);

    // Display all patients after deletion
    cout << "\nDisplaying all patients after deletion:" << endl;
    h.displayPatients();

    return 0;
}




