#include<iostream>
using namespace std;

class B;
class A {
private:
    int value;
public:
A(int v)
    int value=v;

}
    friend void calculateSum(ClassA a, ClassB b);
};

class B {
private:
    int value;
public:
    B(int v) : value(v) {}
    friend void calculateSum(A a, ClassB b);
};

void calculateSum(ClassA a, ClassB b) {
    cout << "A = " << a.value << "\nB = " << b.value << "\nSum = " << (a.value + b.value) << endl;
}

int main(){
    A.a1(5);
    B.b1(6);
    


}