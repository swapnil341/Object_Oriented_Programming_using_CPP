#include<iostream>
#define MAX 35 ;
using namespace std; 
class BuckBus{
	string bookFrom;
	string destination;
	int ticketCount ;
	public:
		static int capacity ;
		
		void updateTicketCount(){
			try{
				if(ticketCount > BuckBus::capacity)
					throw ticketCount ;
				BuckBus::capacity -= ticketCount ;
				displayBookStatus();
			}
			catch(int ticketCount){
				cout<<ticketCount<<" Exceeds The Max Ticket Capacity"<<endl;
				cout<<"Available Tickets : "<<BuckBus::capacity<<endl;
			}
		}
		
		void BuckTicket(string bookFrom,string destination ,int ticketCount){
			this->bookFrom = bookFrom;
			this->destination = destination ;
			this->ticketCount = ticketCount ;
			updateTicketCount();
		}
		
		void displayBookStatus(){
			cout<<"booking Ticket From : "<<bookFrom<<" To : "<<destination<<" Tickets: "<<ticketCount<<endl;
		}
		
//		BuckBus(bookFrom ="Miraj",destination ="Pune",ticketCount = 1){
//			this->bookFrom = bookFrom;
//			this->destination = destination ;
//			this->ticketCount = ticketCount ;
//			updateTicketCount();
//	}
};

int BuckBus::capacity = MAX ;

int main(){
	BuckBus b1,b2 ;
	b1.BuckTicket("miraj","sangli",30);
	b2.BuckTicket("miraj","sangli",10);
	return 0;
}
