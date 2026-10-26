#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    if (!source) {
        cout << "Error: Cannot open source.txt" << endl;
        return 1;
    }

    if (!destination) {
        cout << "Error: Cannot create destination.txt" << endl;
        return 1;
    }

    char ch;

    while (source.get(ch)) {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout << "File copied successfully." << endl;

    return 0;
}