#include<iostream>
using namespace std;

class Vehical{
    protected:
        int topSpeed ;
        int milage ;
        string color ; 
        float weight;
        double price;
        string model ;
    public:
        void display(){
            cout<<"Model"<<model<<endl  
                <<"Price : "<<price<<endl
                <<"Top Speed : "<<topSpeed<<endl
                <<"Milage : "<<milage<<endl
                <<"Color : "<<color<<endl
                <<"Weight : "<<weight<<endl<<endl;
        }
};

class Car : public Vehical{
    protected:
        bool roadLegal ;
        string type ;
    public:
    void display(){
        cout<<"Model : "<<model<<endl  
            <<"Type : "<<type<<endl
            <<"Price : "<<price<<endl
            <<"Top Speed : "<<topSpeed<<endl
            <<"Milage : "<<milage<<endl
            <<"Is Road Legal : "<<roadLegal<<endl
            <<"Color : "<<color<<endl
            <<"Weight : "<<weight<<endl<<endl;
    }
    Car(){
        topSpeed = 0;
        milage = 0;
        color = " "; 
        weight = 0;
        price  = 0;
        model  = " ";
        roadLegal = false;
        type = " ";
    }
};

int main(){
    Car c1 ;
    c1.display();
    return 0;
}
