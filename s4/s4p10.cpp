#include <iostream>
using namespace std;

class Book {
    int bookID;
    string bookName;
    double price;

    static int totalBooks;

public:
    Book(int id, string name, double p) {
        bookID = id;
        bookName = name;
        price = p;

        totalBooks++;
    }

    // Inline function
    inline double discountPrice() {
        return price - (price * 0.10);
    }

    // Operator overloading
    bool operator>(Book b) {
        return price > b.price;
    }

    
    friend void displayCostlier(Book, Book);

    static void displayTotalBooks() {
        cout << "Total Books = " << totalBooks << endl;
    }
};

int Book::totalBooks = 0;

void displayCostlier(Book b1, Book b2) {

    if (b1 > b2) {
        cout << "Costlier Book:" << endl;
        cout << "ID: " << b1.bookID << endl;
        cout << "Name: " << b1.bookName << endl;
        cout << "Price: " << b1.price << endl;

        cout << "Discounted Price = "
             << b1.discountPrice() << endl;
    }
    else {
        cout << "Costlier Book:" << endl;
        cout << "ID: " << b2.bookID << endl;
        cout << "Name: " << b2.bookName << endl;
        cout << "Price: " << b2.price << endl;

        cout << "Discounted Price = "
             << b2.discountPrice() << endl;
    }
}

int main() {

    Book b1(101, "Java", 500);
    Book b2(102, "C++", 700);

    cout << "Book 1 Price = 500" << endl;
    cout << "Book 2 Price = 700" << endl;

    displayCostlier(b1, b2);

    Book::displayTotalBooks();

    return 0;
}