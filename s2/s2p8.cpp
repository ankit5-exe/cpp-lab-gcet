#include <iostream>
using namespace std;

class Class_Marks{

    int Marks[5];


    Class_Marks(){
     
        for(int i=0;i<5;i++){

            cout<<"Enter Marks of student S"<<i+1;

            cin>>Marks[i];

        }
      
    void Highest_Marks(){
        
        int Highest=Marks[0];

        for(int i=0;i<5;i++){

            if Marks[i]>Highest{
                
                Highest = Marks[i];

            }
        }


     void Display_Highest_Marks(){

        cout<<"Highest Marks is :"<<Highest;
    }
    }
};

int main() {

    Class_Marks C1;
    C1.Highest_Marks();
    C1.Display_Highest_Marks();
    
}
}
