#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("students.txt");



    int roll;
    string name;
    float marks;
    char choice;

    do {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;

        file << roll << " " << name << " " << marks << endl;

        cout << "Add another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    file.close();

    cout << "Student records saved successfully." << endl;

    return 0;
}