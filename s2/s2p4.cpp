
#include <iostream>
#include <string>

using namespace std;

class Book{
    string title;
    string author;
   
    public:
    Book(string name, string person){
      title = name;
      author = person;}
    public:
   void display(){
        cout<<"Title of the book is :"<<title<<endl;
        cout<<"Author of the book is :"<<author<<endl;

    }
};

int main(){
    Book b1("One punch Man","One");
    b1.display();

}
