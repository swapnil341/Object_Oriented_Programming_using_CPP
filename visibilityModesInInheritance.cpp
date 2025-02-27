#include<iostream>
using namespace std ;

class Parent {
    private:
        int x = 10 ;
    protected:
        int b = 30 ;
    public:
        int a = 20 ;
        void display(){
            cout<<"In Parent Class"<<endl;
            cout<<"Private Varialbe x : "<<x<<endl;
            cout<<"Public Varialbe a : "<<a<<endl;
            cout<<"Protected Varialbe b : "<<b<<endl<<endl;
        }

};

class PrivatelyInherited : private Parent{
    public:
        void display(){
            cout<<"In Privately Inherited Class"<<endl;
            // cout<<"Private Varialbe x : "<<x<<endl;
            cout<<"Public Varialbe a : "<<a<<endl;
            cout<<"Protected Varialbe b : "<<b<<endl<<endl;
        }
};

class PublicalyInherited : public Parent {
    public:
        void display(){
            cout<<"In Publicaly Inherited Class"<<endl;
            // cout<<"Private Varialbe x : "<<x<<endl;
            cout<<"Public Varialbe a : "<<a<<endl;
            cout<<"Protected Varialbe b : "<<b<<endl<<endl;
        }
};

class ProtectedVayInherited : protected Parent{
    public:
        void display(){
            cout<<"In Protected Vay Inherited Class"<<endl;
            // cout<<"Private Varialbe x : "<<x<<endl;
            cout<<"Public Varialbe a : "<<a<<endl;
            cout<<"Protected Varialbe b : "<<b<<endl<<endl;
        }
};

int main(){
    Parent parent;
    PublicalyInherited publicaly ;
    PrivatelyInherited privately ; 
    ProtectedVayInherited protectedvay ;
    
    parent.display();
    publicaly.display();
    privately.display();
    protectedvay.display();

    return 0;
}
