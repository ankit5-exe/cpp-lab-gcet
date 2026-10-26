#include <iostream>
#include <string>
using namespace std;

class Book {
    int bookID, copies;
    string title;
public:
    Book(int id, string t, int c) : bookID(id), title(t), copies(c) {}
    
    void exchange(Book &other) {
        swap(bookID, other.bookID);
        swap(title, other.title);
        swap(copies, other.copies);
    }
    
    friend Book mostCopies(Book b1, Book b2) {
        return (b1.copies > b2.copies) ? b1 : b2;
    }

    void display() const {
        cout << "ID: " << bookID << ", Title: " << title << ", Copies: " << copies << endl;
    }
};

int main() {
    Book b1(1, "Data Structures", 5), b2(2, "Operating Systems", 12);
    b1.exchange(b2);
    b1.display(); 
    
    Book popular = mostCopies(b1, b2);
    popular.display();
    return 0;
}