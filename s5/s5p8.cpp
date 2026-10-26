#include <iostream>
using namespace std;

template <typename T>
class Array {
private:
    T elements[5];
public:
    void input() {
        cout << "Enter 5 elements: ";
        for(int i = 0; i < 5; i++) {
            cin >> elements[i];
        }
    }

    void display() {
        cout << "[";
        for(int i = 0; i < 5; i++) {
            cout << elements[i] << (i < 4 ? ", " : "");
        }
        cout << "]\n";
    }

    T getLargest() {
        T max = elements[0];
        for(int i = 1; i < 5; i++) {
            if(elements[i] > max) max = elements[i];
        }
        return max;
    }

    T getSmallest() {
        T min = elements[0];
        for(int i = 1; i < 5; i++) {
            if(elements[i] < min) min = elements[i];
        }
        return min;
    }
};

int main() {
    Array<int> intArray;
    cout << "Integer Array Setup\n";
    intArray.input();
    cout << "Array elements: ";
    intArray.display();
    cout << "Largest: " << intArray.getLargest() << "\nSmallest: " << intArray.getSmallest() << "\n\n";

    Array<float> floatArray;
    cout << "Float Array Setup\n";
    floatArray.input();
    cout << "Array elements: ";
    floatArray.display();
    cout << "Largest: " << floatArray.getLargest() << "\nSmallest: " << floatArray.getSmallest() << "\n";

    return 0;
}