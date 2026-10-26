#include <iostream>
using namespace std;

class Rectangle {
    float length, width;
public:
    Rectangle(float l = 0, float w = 0) : length(l), width(w) {}
    
    bool isEqualArea(Rectangle r) {
        return (length * width) == (r.length * r.width);
    }
    
    friend Rectangle merge(Rectangle r1, Rectangle r2) {
        return Rectangle(r1.length + r2.length, r1.width + r2.width);
    }

    void display() const {
        cout << "Rectangle: " << length << " x " << width << endl;
    }
};

int main() {
    Rectangle r1(4, 5), r2(2, 10);
    cout << "Equal area? " << (r1.isEqualArea(r2) ? "Yes" : "No") << endl;
    Rectangle r3 = merge(r1, r2);
    r3.display();
    return 0;
}