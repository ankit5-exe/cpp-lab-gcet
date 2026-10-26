#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int a, string s)
        : Person(n, a) {
        subject = s;
    }

    void display() {
        Person::display();
        cout << "Subject: " << subject << endl;
    }
};

class ResearchScholar : public Person {
private:
    string researchArea;

public:
    ResearchScholar(string n, int a, string r)
        : Person(n, a) {
        researchArea = r;
    }

    void display() {
        Person::display();
        cout << "Research Area: " << researchArea << endl;
    }
};

template <typename T>
class RecordManager {
private:
    T records[3];

public:
    RecordManager(T r1, T r2, T r3) {
        records[0] = r1;
        records[1] = r2;
        records[2] = r3;
    }

    void displayRecords() {
        for (int i = 0; i < 3; i++) {
            records[i].display();
            cout << endl;
        }
    }
};

int main() {

    Teacher t1("Rahul", 35, "C++");
    Teacher t2("Aman", 40, "Mathematics");
    Teacher t3("Arun", 38, "Physics");

    RecordManager<Teacher> teachers(t1, t2, t3);

    cout << "Teacher Records:" << endl;
    teachers.displayRecords();

    ResearchScholar r1("Rohan", 24, "Artificial Intelligence");
    ResearchScholar r2("Badmos", 25, "Cyber Security");
    ResearchScholar r3("Kren", 23, "Machine Learning");

    RecordManager<ResearchScholar> scholars(r1, r2, r3);

    cout << "Research Scholar Records:" << endl;
    scholars.displayRecords();

    return 0;
}