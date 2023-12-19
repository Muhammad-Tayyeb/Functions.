#include <iostream>
#include <string>
using namespace std;


struct Student {
    string firstName;
    string lastName;
    int id;
    int age;
    float weight;
};


void inputDetails(Student& student) {
    cout << "Enter first name: ";
    cin >> student.firstName;

    cout << "Enter last name: ";
    cin >> student.lastName;

    cout << "Enter ID: ";
    cin >> student.id;

    cout << "Enter age: ";
    cin >> student.age;

    cout << "Enter weight: ";
    cin >> student.weight;
}


void printDetails(const Student& student) {
    cout << "\nStudent Details:" << endl;
    cout << "Full Name: " << student.firstName + " " + student.lastName << endl;
    cout << "ID: " << student.id << endl;
    cout << "Age: " << student.age << endl;
    cout << "Weight: " << student.weight << endl;
}

int main() {


    Student student;


    inputDetails(student);


    printDetails(student);

    return 0;
}
