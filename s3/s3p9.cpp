#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    double price;
    int quantity;
public:
    Product(string n = "", double p = 0, int q = 0) : name(n), price(p), quantity(q) {}
    
    friend Product higherTotalValue(Product p1, Product p2) {
        double v1 = p1.price * p1.quantity;
        double v2 = p2.price * p2.quantity;
        return (v1 > v2) ? p1 : p2;
    }
    
    
    Product combineInventory(Product p) {
        Product combined;
        combined.name = name; 
        combined.price = price;
        combined.quantity = quantity + p.quantity;
        return combined;
    }

    void display() const {
        cout << name << " - Qty: " << quantity << ", Price: $" << price << endl;
    }
};

int main() {
    Product p1("Keyboard", 45.0, 2), p2("Mouse", 25.0, 5);
    Product higher = higherTotalValue(p1, p2);
    higher.display();
    
    Product restock("Keyboard", 45.0, 3);
    Product totalInv = p1.combineInventory(restock);
    totalInv.display();
    return 0;
}