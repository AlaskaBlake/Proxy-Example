//gumball.cpp
//Blake Caldwell
//5/3/2020
//is a gumball machine

#include "Gumball.hpp"

using std::string;

Gumball::Gumball(const std::string& location, int inventoryCount) : _location(location), _numberOfGumballs(inventoryCount), _state(STATE::WAITING) {}
	
std::string Gumball::getLocation() const
{
	return _location;
}

int Gumball::inventoryCount() const
{
	return _numberOfGumballs;
}

string Gumball::getStateString() const
{
	switch (_state) {
	case STATE::WAITING:
		return "Waiting";
		break;
	case STATE::EMPTY:
		return "MACHINE EMPTY, NEEDS RESTOCKED!";
		break;
	case STATE::IN_PROGRESS:
		return "Transaction in progress.";
		break;
	};
	return "";
}

void Gumball::transaction() {
	if (inventoryCount() == 0)
		_state = STATE::EMPTY;
	else {
		_state = STATE::IN_PROGRESS;
		--_numberOfGumballs;
		_state = STATE::WAITING;
	}
}

void Gumball::gumballsAdded(int gumballs)
{
	_numberOfGumballs += gumballs;
}