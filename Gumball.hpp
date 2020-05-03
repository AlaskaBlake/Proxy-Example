//gumball.hpp
//Blake Caldwell
//5/3/2020
//acts as a gumball machine

#ifndef GUMBALL_HPP
#define GUMBALL_HPP

#include <string>

#include "State.hpp"

class Gumball {
public:
	Gumball(const std::string& location, int inventoryCount = 0);
	std::string getLocation() const;
	int inventoryCount() const;
	std::string getStateString() const;
	void transaction();
	void gumballsAdded(int gumballs);
private:
	std::string _location;
	int _numberOfGumballs;
	STATE _state;
};
#endif