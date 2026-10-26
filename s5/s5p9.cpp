#include <iostream>
using namespace std;

template <typename T>
class Result {
private:
    T marks[5];
public:
    Result(T m1, T m2, T m3, T m4, T m5) {
        marks[0] = m1; 
        marks[1] = m2; 
        marks[2] = m3; 
        marks[3] = m4; 
        marks[4] = m5;
    }

    T getTotal() {
        T total = 0;
        for(int i = 0; i < 5; i++) total += marks[i];
        return total;
    }

    double getAverage() {
        return static_cast<double>(getTotal()) / 5.0;
    }

    T getHighest() {
        T high = marks[0];
        for(int i = 1; i < 5; i++) {
            if(marks[i] > high) high = marks[i];
        }
        return high;
    }

    T getLowest() {
        T low = marks[0];
        for(int i = 1; i < 5; i++) {
            if(marks[i] < low) low = marks[i];
        }
        return low;
    }

    void displayResult() {
        cout << "Marks Array: [";
        for(int i = 0; i < 5; i++) {
            cout << marks[i] << (i < 4 ? ", " : "");
        }
        cout << "]\n";
        cout << "Total: " << getTotal() << ", Average: " << getAverage() 
             << ", Highest: " << getHighest() << ", Lowest: " << getLowest() << "\n";
    }
};

int main() {
    cout << "Integer Marks:\n";
    Result<int> intResult(85, 90, 78, 92, 88);
    intResult.displayResult();

    cout << "\nFloating-Point Marks:\n";
    Result<float> floatResult(85.5f, 90.0f, 78.5f, 92.5f, 88.0f);
    floatResult.displayResult();

    return 0;
}