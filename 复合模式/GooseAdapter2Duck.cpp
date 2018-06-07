#include "GooseAdapter2Duck.h"
#include "Goose.h"

GooseAdapter2Duck::GooseAdapter2Duck(Goose* goose)
{
	this->goose = goose;
}

GooseAdapter2Duck::~GooseAdapter2Duck()
{
	delete goose;
}

void GooseAdapter2Duck::quack()
{
	goose->honk();
}