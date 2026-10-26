#include <iostream>
using namespace std;

class Interest {
    float P;
    float R;
    float T;

public:
    Interest(float p, float r, float t) {
        P = p;
        R = r;
        T = t;
    }

    inline float calculateSI() {
        return (P * R * T) / 100;
    }
};

int main() {
    Interest obj(10000, 5, 2);

    cout << "SI = " << obj.calculateSI() << endl;

    return 0;
}