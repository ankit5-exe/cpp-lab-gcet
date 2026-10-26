#include <iostream>

using namespace std;

class Maximum {
public:
    int max(int a, int b) {
        if(a>)
        return (a > b) ? a : b;
    }

    int max(int a, int b, int c) {
        return max(max(a, b), c);
    }

    float max(float a, float b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Maximum maximum;

    cout << "Max of 10 and 20 = " << maximum.max(10, 20) << endl;
    cout << "Max of 5, 8 and 3 = " << maximum.max(5, 8, 3) << endl;
    cout << "Max of 3.2 and 4.5 = " << maximum.max(3.2f, 4.5f) << endl;

    return 0;
}