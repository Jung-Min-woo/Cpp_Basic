#include "airline.h"
#include <iostream>

int main(void) {
	//Stack based allocation
	AirlineTicket myTicket;
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	double cost = myTicket.calculatePriceInDollars();
	cout << "This ticket will cost $" << cost << endl;

	//Heap based allocation using Smart Pointer
	auto myTicket2 = make_unique<AirlineTicket>();
	myTicket2->setPassengerName("Laudimore M. Hallidue");
	myTicket2->setNumberOfMiles(2000);
	myTicket2->sethasEliteSuperRewardsStatus(true);
	double cost2 = myTicket2->calculatePriceInDollars();
	cout << "This other ticket will cost $" << cost2 << endl;

	//Heap based allocation using just pointer
	AirlineTicket* myTicket3 = new AirlineTicket();

	delete myTicket3;
	return 0;
}