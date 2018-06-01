#ifndef __GUMBALLMACHINE_H__
#define __GUMBALLMACHINE_H__

class StateMachine;

class GumballMachine
{
public:
	StateMachine* stateMachine;		//可以不定义这个类，直接在需要用状态机的类中加上声明一个State成员变量和ChangeState成员函数即可
	int count = 0;
	GumballMachine(int numberGumballs);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void refill(int count);
};

#endif