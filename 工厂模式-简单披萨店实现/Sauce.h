#ifndef SAUCE_H__
#define SAUCE_H__
#include <iostream>
using namespace std;

class Sauce
{
public:
	Sauce(){};
	~Sauce(){};

	virtual string GetName() = 0;
};


#endif

