#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    void input() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }


    Complex add(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }

    Complex multiply(Complex c) {
        Complex result;

        result.real = (real * c.real) - (imag * c.imag);
        result.imag = (real * c.imag) + (imag * c.real);

        return result;
    }

    void display() {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

Complex subtract(Complex c1, Complex c2) {
    Complex result;

    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;

    return result;
}

int main() {
    Complex c1, c2, sum, difference, product;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    sum = c1.add(c2);
    difference = subtract(c1, c2);
    product = c1.multiply(c2);

    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    cout << "Multiplication: ";
    product.display();

    return 0;