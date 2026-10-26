#include <iostream>
using namespace std;

class Arraysum{

int arr[10];


public:
    Arraysum() {
        for (int a = 0; a < 10; a++) {
            cout << "Enter element with position " << a + 1 << " of array: ";
            cin >> arr[a];
        }
    }

    void findSum() {
        int sum = 0;

        for (int i = 0; i < 10; i++) {
            sum = sum + arr[i];
        }

        cout << "The sum of array is : " << sum<<endl;
    }
};

int main() {
    

Arraysum A1;
A1.findSum();



}
