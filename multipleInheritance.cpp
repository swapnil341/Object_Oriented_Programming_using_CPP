#include<iostream>
using namespace std;

class Parent1{
    public:
        string parent1String = "In Parent1 Class ";
        void display1(){
            cout<<"Parent1 Class String : "<<parent1String<<endl<<endl;
        }
};

class Parent2{
    public:
        string parent2String = "In Parent2 Class";
        void display2(){
            cout<<"Parent2 Class String : "<<parent2String<<endl<<endl;
        }
};

class Child : public Parent1, public Parent2{
    public:
        string childString = "In Child Class ";
        void display(){
            cout<<"Parent1 Class String : "<<parent1String<<endl;
            cout<<"Parent2 Class String : "<<parent2String<<endl;
            cout<<"Child Class String : "<<childString<<endl;
        }
};

int main(){
    Parent1 p1;
    Parent2 p2; 
    Child c ;
    p1.display1();
    p2.display2();
    c.display();
    return 0;
}
