#include <iostream>
using namespace std;

class Rectangle {

    int length, breadth;

    public:

    void input(int l , int b){

       l=length;
         b=breadth;
    }
     public:
    void calculateArea(){
    int Area=l*b;


    }

    void displayArea(){
        cout<<"Area of rectangle is :"<<Area;

    }
};

int main() {

Rectangle R1;

R1.input(5,10);

R1.calculateArea();
R1.displayArea();


}
