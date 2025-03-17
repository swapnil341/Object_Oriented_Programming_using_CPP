#include<iostream>
using namespace std;
int main(){
	int age ;
	cout<<"Enter Age: ";
	cin>>age;
	try{
		if(age == 0 ) 	throw ("Your age is 0");
		if(age < 0 ) 	throw (age);
		cout<<"your age is : "<<age<<endl;
	}
	catch(const char* str){
		cout<<str<<endl;
	}
	catch(const int age){
		cout<<"invalid age: "<<age<<endl;
	}
	
	return 0;
}
