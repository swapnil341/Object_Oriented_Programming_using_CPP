#include<iostream>
#include<stdexcept>
using namespace std;

void arrException(){
	int arr[5] {1,2,3,4,5},index;
	cout<<"Enter index: ";
	cin>>index;
	try{
		if(index < 0 || index > 4) 	throw out_of_range("Invalid index ");
		cout<<"Element at Index "<<index<<" is "<<arr[index];
	}
	catch(const out_of_range *str){
		cout<<"Exception - "<<str;
	}
}

void divideByZero(){
	float a,b,c;
	cout<<"Enter two numbers for division: ";
	cin>>a>>b;
	try{
		if(b == 0)	throw ("Division by Zero");
		cout<<"Division : "<<a/b;
	}
	catch(const char* str){
		cout<<"Exception - "<<str;
	}
}
 
int main(){
	int choice;
	do{
		cout<<"\n1.Divide\n2.Array Index\n3.Exit\n";
		cin>>choice ;
		switch(choice){
			case 1 :
				divideByZero();
				break;
			case 2 :
				arrException();
				break;
			case 3 :return 0 ;
		}
	}while(true);
	return 0;
}
