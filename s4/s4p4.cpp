#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;
public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}
    
    Distance operator+(const Distance& obj) {
        int totalFeet = feet + obj.feet;
        int totalInches = inches + obj.inches;
        
        if (totalInches >= 12) {
            totalFeet += totalInches / 12;
            totalInches %= 12;
        }
        return Distance(totalFeet, totalInches);
    }
    
    void display() {
        cout << feet << " ft " << inches << " in" << endl;
    }
};



int main(){
        Distance D1(6,15);
        Distance D2(5,10);
        Distance D3 = D1+D2;
        D3.display();


    return 0;
}