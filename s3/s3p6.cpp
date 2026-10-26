#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    double salary;
public:
    Employee(string n = "", double s = 0.0) : name(n), salary(s) {}
    
    friend Employee getHighestSalary(Employee arr[], int size);
    friend Employee applyIncrement(Employee e);

    void display() const {
        cout << "Employee: " << name << ", Salary: " << salary << endl;
    }
};


Employee getHighestSalary(Employee arr[], int size) {
    Employee maxEmp = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i].salary > maxEmp.salary) {
            maxEmp = arr[i];
        }
    }
    return maxEmp;
}

Employee applyIncrement(Employee e) {
    e.salary += e.salary * 0.10;
    return e;
}

int main() {
    Employee arr[3] = {Employee("RIzzgod", 50000), Employee("Bob", 60000), Employee("Charlie", 55000)};
    Employee highest = getHighestSalary(arr, 3);
    highest.display();
    
    Employee revised = applyIncrement(highest);
    revised.display();
    return 0;
}