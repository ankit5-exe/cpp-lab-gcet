#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if (a>=b && a>=c ){
        cout<<a<< " is the greatest";
    }
    if (b>=a && b>=c ){
        cout<<b<< " is the greatest";
    }
    if (c>=b && c>=a ){
        cout<<c<< " is the greatest";
    }
}