#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rolln;
    int age;

public:
    Student(string n, int r, int a) {
        name = n;
        rolln = r;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rolln << endl;
        cout << "Age: " << age << endl;
    }
};

class EngineeringStudent : public Student {
    string branch;
    int semester;

public:
    EngineeringStudent(string n, int r, int a, string b, int s)
        : Student(n, r, a) {
        branch = b;
        semester = s;
    }

    void display() {
        Student::display();

        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {

    EngineeringStudent E1("Slade", 24, 20, "Computer Science", 3);

    E1.display();

    return 0;
}