#include<iostream>
using namespace std ;
class arithmeticOperations{
    public:
        int number1, number2;
        void get(){
            cout<<"Enter Two Numbers: ";
            cin>>number1>>number2;
        }
        void Operations(){
            cout<<number1<<" + "<<number2<<" = "<<number1 + number2<<endl;
            cout<<number1<<" - "<<number2<<" = "<<number1 - number2<<endl;
            cout<<number1<<" * "<<number2<<" = "<<number1 * number2<<endl;
            cout<<number1<<" / "<<number2<<" = "<<number1 / number2<<endl;
            cout<<number1<<" % "<<number2<<" = "<<number1 % number2<<endl;
        }
};

int main(){
    arithmeticOperations obj1 ;
    obj1.get();
    obj1.Operations();
    return 0;
}