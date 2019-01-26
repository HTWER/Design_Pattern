#ifndef __STATE_H__
#define __STATE_H__

class StateMachine;

class State
{
public:
	virtual void Enter(StateMachine* stateMachine){};
	virtual void Exit(StateMachine* stateMachine){};
	//���´��麯������ҵ���������
	virtual void insertQuarter(StateMachine* stateMachine) = 0;
	virtual void ejectQuarter(StateMachine* stateMachine) = 0;
	virtual void turnCrank(StateMachine* stateMachine) = 0;
};

#endif