#include <iostream>
using namespace std;

int main() {
    int n, arr[100], key, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to count: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    cout << "Occurrences = " << count << endl;

}