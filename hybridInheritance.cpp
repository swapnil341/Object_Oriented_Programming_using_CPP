#include<iostream>
using namespace std;

class GrandParent1{
    public:
        string grandParent1String = "In GrandParent1 Class ";
        void display1(){
            cout<<"GrandParent1 Class String : "<<grandParent1String<<endl<<endl;
        }
};

class GrandParent2{
    public:
        string grandParent2String = "In GrandParent2 Class";
        void display2(){
            cout<<"GrandParent2 Class String : "<<grandParent2String<<endl<<endl;
        }
};

class Parent : public GrandParent1, public GrandParent2{
    public:
        string parentString = "In Parent Class ";
        
};

class Child : public Parent {
    public:
    string childString = "In Child Class ";
    void display(){
        cout<<"GrandParent1 Class String : "<<grandParent1String<<endl;
        cout<<"GrandParent2 Class String : "<<grandParent2String<<endl;
        cout<<"Parent Class String : "<<parentString<<endl;
        cout<<"Child Class String : "<<childString<<endl;
    }
};

int main(){
    Child c ;
    c.display();
    return 0;
}
