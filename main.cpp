//main.cpp
//Blake Caldwell
//5/3/2020
//runs the Proxy Example code

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::to_string;

#include "Gumball.hpp"

string getInfo(const Gumball& machine) {
	return "Location: " + machine.getLocation() + "\nGumballs Left: " + to_string(machine.inventoryCount()) + "\nState: " + machine.getStateString() + "\n";
}

int main() {
	Gumball machine1("Debarr & Muldoon Fred Myers", 50);
	Gumball machine2("Northern Lights & Lake Otis FedEx", 100);
	Gumball machine3("Northern Lights & Bragaw East High School", 1);

	cout << getInfo(machine1) << endl;
	cout << getInfo(machine2) << endl;
	cout << getInfo(machine3) << endl;

	machine3.transaction();

	cout << getInfo(machine3) << endl;

	machine3.transaction();

	cout << getInfo(machine3);
}