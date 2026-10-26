#include <iostream>
#include<string>
using namespace std;

class Text{

string str;


public:
    Text(){
        cout<<"Enter a string of your choice : ";
        getline(cin,str);

    }
    void findlength(){
        int count=0;
        int i = 0;
        
        while (str[i]!= '\0'){
            count++;
            i++;
        }
        cout<<"THe length of the string is :"<<count<<endl;

    }

};

int main(){

    Text t1;
    t1.findlength();
    



}
