#include <iostream>
using namespace std;

class Distance {
public:
    int feet;
    int inches;

    void input() {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inches;
    }

    Distance add(Distance d) {
        Distance result;

        result.feet = feet + d.feet;
        result.inches = inches + d.inches;

        if (result.inches >= 12) {
            result.feet += result.inches / 12;
            result.inches = result.inches % 12;
        }

        return result;
    }

    void display() {
        cout << feet << " ft " << inches << " in";
    }
};

int main() {
    Distance d1, d2, total;

    cout << "Enter first distance:\n";
    d1.input();

    cout << "\nEnter second distance:\n";
    d2.input();

    total = d1.add(d2);

    cout << "\nTotal distance: ";
    total.display();

    return 0;
}