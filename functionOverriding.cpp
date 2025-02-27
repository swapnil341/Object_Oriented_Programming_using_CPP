#include<iostream>
using namespace std;

class Animal {
    public:
        void display(){
            cout<<"I am Animal"<<endl; 
        }
};

class Human : public Animal {
    public:
        void display(){
            cout<<"I am Human"<<endl;
        }
};

int main(){
    Animal a1 ;
    Human h1 ;
    cout<<"Display() function call using Parent class object"<<endl;
    a1.display();
    cout<<"Display() function call using Child class object"<<endl;
    h1.display();
    return 0;
}
