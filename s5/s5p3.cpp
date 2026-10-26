#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string Title;
    string Author;

public:
    Book(string t, string a) {
        Title = t;
        Author = a;
    }
};

class Ebook : public Book {
private:
    float filesize;
    string format;

public:
    Ebook(string t, string a, float size, string f)
        : Book(t, a) {
        filesize = size;
        format = f;
    }

    void display() {
        cout << Title << " was written by " << Author
             << ". It was uploaded on internet as an Ebook of size "
             << filesize << " " << format << " file" << endl;
    }
};

int main() {

    Ebook books[3] = {
        Ebook("Deep Work", "Cal Newport", 54, "pdf"),
        Ebook("Monster", "Naoki Urasawa", 14, "pdf"),
        Ebook("Metamorphosis", "Franz Kafka", 31, "pdf")
    };

    for (int i = 0; i < 3; i++) {
        books[i].display();
    }

    return 0;
}