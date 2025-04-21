#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
	map<string,string>phonebook ;
	phonebook["Raj"] = "6542321566" ;
	phonebook["Kishor"] = "4565478945" ;
	phonebook["Radha"] = "4354635984" ;
	string name;
	cout<<"Enter Name: ";
	cin>>name;
	if(phonebook.find(name) != phonebook.end()){
		cout<<name<<" : "<<phonebook[name];
	}else{
		cout<<"Data Not Found!"<<endl;
	}
	return 0;
}
