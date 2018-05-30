#include "StateMachine.h"
#include "State.h"

StateMachine::StateMachine(void* object)
{
	this->object = object;
}

void StateMachine::setState(State* state)
{
	this->state->Exit(this);
	this->state = state;
	this->state->Enter(this);
}