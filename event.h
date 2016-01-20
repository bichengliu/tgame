#ifndef EVENT_H
#define EVENT_H
class event{
	std::string information;
	int* options;
	int lengthofoptions;
public:
	event();
	void printevent(void);
	int  getnext(void);
	void choosenext(int choice);
};

#endif