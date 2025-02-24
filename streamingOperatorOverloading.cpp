#include<iostream>
using namespace std;

class Date {
	private: 
		int day ;
		int month ;
		int year ;
	public:
		Date():day(1),month(1),year(1999){};      // Default Constructor
		friend void operator >> (istream &in, Date &obj);
		friend void operator << (ostream &out, Date &obj);
};

void operator >> (istream &in , Date &obj){
	cout<<"Day: ";
	in>>obj.day;
	cout<<"Month: ";
	in>>obj.month ;
	cout<<"Year: " ;
	in>>obj.year ;
}

void operator << (ostream &out, Date &obj){
	out<<"Entered Date : ";
	out<<obj.day<<"/"<<obj.month<<"/"<<obj.year<<endl;
}

int main(){
	Date d1 ;
	cin>>d1 ;
	cout<<d1 ;
	return 0;
}
