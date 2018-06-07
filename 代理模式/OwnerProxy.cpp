#include "OwnerProxy.h"

OwnerProxy::OwnerProxy(IPersonBean* realPersonBean)
{
	this->realPersonBean = realPersonBean;
}

string OwnerProxy::getName()
{
	return realPersonBean->getName();
}

string OwnerProxy::getGender()
{
	return realPersonBean->getGender();
}

string OwnerProxy::getInterests()
{
	return realPersonBean->getInterests();
}

int OwnerProxy::getHotOrNotRating()
{
	return realPersonBean->getHotOrNotRating();
}

void OwnerProxy::setName(string name)
{
	realPersonBean->setName(name);
}

void OwnerProxy::setGender(string gender)
{
	realPersonBean->setGender(gender);
}

void OwnerProxy::setInterests(string interests)
{
	realPersonBean->setInterests(interests);
}

void OwnerProxy::setHotOrNotRating(int rating)
{
	cout << "无权评分" << endl;
	abort();
}