#include <iostream>
#include <string>
using namespace std;

class Student {

    string Name;
    int RollNo;
    
    public:

void   setdata(int r,string n)
    {
        RollNo = r;
        Name = n;
    }
    public:
 void   displayData(){
      
        cout<<"The name is  :"<<Name<<endl;
        cout<<"The roll no. is :"<<RollNo;

 }
    

};

int main(){

    Student s1;
    s1.setdata(03,"Tank");

    s1.displayData();




}
