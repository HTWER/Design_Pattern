#ifndef DOUGH_H__
#define DOUGH_H__
#include <iostream>
using namespace std;

class Dough
{
public:
	Dough(){};
	~Dough(){};

	virtual string GetName() = 0;
};


#endif

