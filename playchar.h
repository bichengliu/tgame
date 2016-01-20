#ifndef PLAYCHAR_H
#define PLAYCHAR_H
//done testing
class playchar{
	std::string playcharname;
	int pcsanity; // I may or may not remove this mechanic in the future
	int pcstatus;
public: //functions to access a player character
	playchar();
	std::string getpcname(void);
	void setpcname(std::string name);
	void setpcsanity(int sanity);
	void setpcstatus(int status);
	void printpc(void);
};


#endif