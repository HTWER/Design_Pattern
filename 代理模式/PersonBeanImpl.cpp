#include "PersonBeanImpl.h"

string PersonBeanImpl::getName()
{
	return name;
}

string PersonBeanImpl::getGender()
{
	return gender;
}

string PersonBeanImpl::getInterests()
{
	return interests;
}

int PersonBeanImpl::getHotOrNotRating()
{
	if (ratingCount == 0)
		return 0;
	return (rating / ratingCount);
}

void PersonBeanImpl::setName(string name)
{
	this->name = name;
}

void PersonBeanImpl::setGender(string gender)
{
	this->gender = gender;
}

void PersonBeanImpl::setInterests(string interests)
{
	this->interests = interests;
}

void PersonBeanImpl::setHotOrNotRating(int rating)
{
	this->rating = rating;
	ratingCount++;
}