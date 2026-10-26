#include <iostream>
#include <string>
using namespace std;

class Employee {
    
string EmployeeName;

int basicsalary;

float hra;

float Da;

public:

Employee(){

    cout<<"Enter Employee Name : ";
    cin>>EmployeeName;


    cout<<"Enter Basic Salary : ";
    cin>>basicsalary;
}
public :

void HRA(){

    float hra=basicsalary/5;
}
public :

void DA() {

    float Da=basicsalary/10;

}
public :
void Total(){

cout<<"Employee "<<EmployeeName<<" receives "<<basicsalary+hra+Da<<" as total salary \n";
}
};

int main() {

    Employee E1;
    E1.DA();
    E1.HRA();
    E1.Total();

}
