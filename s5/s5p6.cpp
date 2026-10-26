#include <iostream>
using namespace std;

template <typename T>
T findLarger(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    int i1 = 10, i2 = 20;
    float f1 = 5.5f, f2 = 2.2f;
    double d1 = 100.123, d2 = 500.456;
    char c1 = 'A', c2 = 'Z';

    cout << "Larger int: " << findLarger(i1, i2) << endl;
    cout << "Larger float: " << findLarger(f1, f2) << endl;
    cout << "Larger double: " << findLarger(d1, d2) << endl;
    cout << "Larger char: " << findLarger(c1, c2) << endl;

    swapValues(i1, i2);
    swapValues(f1, f2);
    swapValues(d1, d2);
    swapValues(c1, c2);

    cout << "\nAfter swapping:" << endl;
    cout << "Int: " << i1 << " " << i2 << endl;
    cout << "Float: " << f1 << " " << f2 << endl;
    cout << "Double: " << d1 << " " << d2 << endl;
    cout << "Char: " << c1 << " " << c2 << endl;

    return 0;
}