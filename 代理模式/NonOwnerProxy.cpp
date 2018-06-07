#include "NonOwnerProxy.h"

NonOwnerProxy::NonOwnerProxy(IPersonBean* realPersonBean)
{
	this->realPersonBean = realPersonBean;
}

string NonOwnerProxy::getName()
{
	return realPersonBean->getName();
}

string NonOwnerProxy::getGender()
{
	return realPersonBean->getGender();
}

string NonOwnerProxy::getInterests()
{
	return realPersonBean->getInterests();
}

int NonOwnerProxy::getHotOrNotRating()
{
	return realPersonBean->getHotOrNotRating();
}

void NonOwnerProxy::setName(string name)
{
	cout << "无权修改" << endl;
	abort();
}

void NonOwnerProxy::setGender(string gender)
{
	cout << "无权修改" << endl;
	abort();
}

void NonOwnerProxy::setInterests(string interests)
{
	cout << "无权修改" << endl;
	abort();
}

void NonOwnerProxy::setHotOrNotRating(int rating)
{
	realPersonBean->setHotOrNotRating(rating);
}