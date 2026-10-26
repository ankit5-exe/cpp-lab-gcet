#include <iostream>
using namespace std;

class Number {

int num;
int n;
public:
void input(){
    cout<<"Enter a number :";
    cin>>num;
}

void isEven(){

n= num%2;

}
void displayResult(){

    if (n==0){
        
        cout<<"Nuber is even ";
    }
    else {
        cout<<"Number is odd";
    }
}


};

int main() {

Number n1;
n1.input();
n1.isEven();
n1.displayResult();






}
