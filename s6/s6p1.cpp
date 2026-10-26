#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int num, den;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;

    try {
        if (den == 0) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        cout << "Result: " << (double)num / den << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}