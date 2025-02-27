#include<iostream>
using namespace std ;

class GrandParent {
    public:
        void gpDisplay(){
            cout<<"Inside GrandParent Class"<<endl;
        }
};

class Parent : public GrandParent {
    public: 
        void pDisplay(){
            cout<<"Inside Parent Class"<<endl;
        }
};

class Child : public Parent{
    public : 
        void cdisplay(){
            cout<<"Inside Child Class "<<endl;
        }
};

int main(){
    Child c1 ;
    c1.gpDisplay();
    c1.pDisplay();
    c1.cdisplay();
    return 0;
}
