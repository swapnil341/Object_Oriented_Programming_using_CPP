// concatenation of two strings using '+' operator 
#include<iostream>
using namespace std ;

class StringClass{
	private: 
		string str ;
	public :
		void display(){
			cout<<"String : "<<str<<endl;
		}
		StringClass():str("Default"){}; //Default Constructor
		StringClass(string stringVal):str(stringVal){}; //Parameterized Constructor
		StringClass operator + (StringClass obj){
			str.append(obj.str); 
			return str ;
		}
};

int main(){
	StringClass s1("Good ") ;
	StringClass s2("Morning") ;
	StringClass s3 ;
	s3 = s1+ s2 ;
	s3.display() ;
	return 0;
}
