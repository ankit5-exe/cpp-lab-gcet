#include <iostream>
using namespace std;

class Student {

int Rollno;
float Marks;

cout<<"Enter Rollno : ";
cin>> Rollno ;

cout<<"Enter Marks :";
cin>> Marks ;


}

Student FindStudent(Student S1, Student S2) {
    if (S1.Marks > S2.Marks) {
        return S1;
    } else {
        return S2;
    }
}

int main(){
 Student S1, S2, Top scorer;
Topscorer = FindStudent(S1, S2);
cout<< "Top Scorer Details: " << endl;


}