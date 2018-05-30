#ifndef __STATEMACHINE_H__
#define __STATEMACHINE_H__

class State;

class StateMachine
{
public:
	void* object;
	State* state;
	StateMachine(void* object);
	void setState(State* state);
};

#endif