#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int EId;
    string Name;

public:
    Employee(int id, string N) {
        EId = id;
        Name = N;
    }

    void display() {
        cout << Name << "'s Employee Id is " << EId << endl;
    }
};

class Manager : public Employee {
    string Dept;
    int Salary;

public:
    Manager(int id, string N, string D, int s)
        : Employee(id, N) {
        Dept = D;
        Salary = s;
    }

    void display() {
        Employee::display();
        cout << Name << " is in " << Dept
             << " Department and is earning " << Salary << "$" << endl;
    }
};

int main() {

    Manager Ms[5] = {
        Manager(101, "Rahul", "IT", 60000),
        Manager(102, "Aman", "HR", 800000),
        Manager(103, "Arun", "Finance", 700000),
        Manager(106, "Crewz", "Marketing", 990000),
        Manager(200, "Rehul", "AI", 7888888)
    };

    for (int i = 0; i < 5; i++) {
        Ms[i].display();
    }

    return 0;
}