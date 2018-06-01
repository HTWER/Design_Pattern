#include "StateMachine.h"
#include "State.h"

#ifndef NULL
#define NULL ((void*)0)
#endif

StateMachine::StateMachine(void* object)
{
	this->object = object;
}

void StateMachine::changeState(State* state)
{
	if (state!=NULL)
		this->state->Exit(this);
	this->state = state;
	this->state->Enter(this);
}