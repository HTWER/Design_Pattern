#ifndef __SOLDSTATE_H__
#define __SOLDSTATE_H__

#include "State.h"
#include "GumballMachine.h"
#include <iostream>
using namespace std;

class GumballMachine;

class SoldState :public State
{
private:
	GumballMachine* gumballMachine;		//...ɾ����ÿ�ε��ö���һ��
public:
	SoldState(GumballMachine* gumballMachine);	//... ɾ��
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
};


#endif