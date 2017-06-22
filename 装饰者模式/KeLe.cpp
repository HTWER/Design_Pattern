#include "KeLe.h"


KeLe::KeLe()
{
	description = "KeLe";
}


KeLe::~KeLe()
{
}

std::string KeLe::getDescription()
{
	return description;
}

float KeLe::cost()
{
	return 2.5;
}
