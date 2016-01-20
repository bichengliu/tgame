#include <iostream>
#include <string>
#include "playchar.h"

//done testing
playchar::playchar(void){}

std::string playchar::getpcname(void)
{
	std::string pcname;
	std::cout << "What is the name of your PC? \n";
	std::getline(std::cin, pcname);
	return pcname;
}

void playchar::setpcname(std::string name)
{
	playcharname = name;
}

void playchar::setpcsanity(int sanity)
{
	pcsanity = sanity;
}

void playchar::setpcstatus(int status)
{
	pcstatus = status;
}

void playchar::printpc(void)
{
	std::cout << "The name is: " << playcharname << " and the sanity is: " << pcsanity << "\n";
	if(pcstatus == 1){
	std::cout <<"And " << playcharname << " is currently alive! \n";
	}	
	else{
	std::cout <<"And " << playcharname << " is currently dead! \n";
	}	
}