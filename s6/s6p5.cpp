#include <iostream>

using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int index;
    
    cout << "Enter index: ";
    cin >> index;

    try {
        if (index < 0 || index > 9) {
            throw "Error: Array Index Out of Bounds.";
        }
        cout << "Element at index " << index << " is: " << arr[index] << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}