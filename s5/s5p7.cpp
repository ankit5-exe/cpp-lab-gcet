#include <iostream>
using namespace std;

template <typename T>

class Pair {

    private:
    T val1, val2;

    public:
    Pair(T v1, T v2)  {
        val1=v1;
        val2=v2;
    }
    
    T getMax() {
        return (val1 > val2) ? val1 : val2;
    }
    
    T getMin() {
        return (val1 < val2) ? val1 : val2;
    }
    
    void displayMaxMin() {
        cout << "Max: " << getMax() << ", Min: " << getMin() << endl;
    }
};

int main() {
    Pair<int> intPair(45, 12);
    cout << "Integer Pair -> ";
    intPair.displayMaxMin();

    Pair<float> floatPair(3.14, 9.81);
    cout << "Float Pair -> ";
    floatPair.displayMaxMin();

    return 0;
}