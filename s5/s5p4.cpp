#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string regNumber;
    string company;

public:
    Vehicle(string reg, string comp) {
        regNumber = reg;
        company = comp;
    }
};

class Car : public Vehicle {
private:
    string fuelType;
    int engineCapacity;

public:
    Car(string reg, string comp, string fuel, int cc)
        : Vehicle(reg, comp) {
        fuelType = fuel;
        engineCapacity = cc;
    }

    void display() {
        cout << "Car Registration: " << regNumber << endl;
        cout << "Company: " << company << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

class Bike : public Vehicle {
private:
    string fuelType;
    int engineCapacity;

public:
    Bike(string reg, string comp, string fuel, int cc)
        : Vehicle(reg, comp), fuelType(fuel), engineCapacity(cc) {
    }

    void display() {
        cout << "Bike Registration: " << regNumber << endl;
        cout << "Company: " << company << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {

    Car myCar("JK-02-AB-0736", "Wolkswagen", "Diesel", 800);

    Bike myBike("JK-02-BQ-9876", "Suzuki", "Petrol", 350);

    myCar.display();
    myBike.display();

    return 0;
}