#include <iostream>
using namespace std;


class Complex {
private:
    double real, imag;
public:
    Complex(int r = 0, int i = 0) {
    real =r;
    imag=i;}
    
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
        Complex C1(5,3);
        Complex C2(4,6);
        Complex C3= C1 + C2;

        C3.display();
       


    return 0;
}