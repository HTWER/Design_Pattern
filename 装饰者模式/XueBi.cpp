#include "XueBi.h"


XueBi::XueBi()
{
	description = "XueBi";
}


XueBi::~XueBi()
{
}

std::string XueBi::getDescription()
{
	return description;
}

float XueBi::cost()
{
	return 2.4;
}
