#include <iostream>
using namespace std;

class Numbers {
private:
    int num1, num2;
public:
    Numbers(int n1, int n2) {
        num1=n1;
        num2=n2;
    }
    
    friend void findLargest(Numbers n);
};

void findLargest(Numbers n) {

    int largest;

    if(n.num1 > n.num2) {
        largest= n.num1;
    }

    else{

       largest= n.num2;}


    cout << "Numbers: " << n.num1 << " and " << n.num2 << "\nLargest = " << largest << endl;
}

int main (){

    Numbers N1(4,5);
    Numbers N2(55,89999);

    findLargest(N1);
    findLargest(N2);
    

    return 0;
}