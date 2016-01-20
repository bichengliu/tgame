#include <iostream>
#include <string>
#include "event.h"

event::event(void){}

void event::printevent(void)
{
	std::cout << information;
}

int event::getnext(void)
{
	int playerchoice;
	std::cin >> playerchoice;
	return playerchoice;
}

void event::choosenext(int choice)
{
	// build this when the linked list is complete
}