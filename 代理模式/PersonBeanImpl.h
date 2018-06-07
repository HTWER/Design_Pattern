#ifndef __PERSONBEANIMPL_H__
#define __PERSONBEANIMPL_H__

#include "IPersonBean.h"

#include <iostream>
using namespace std;

class PersonBeanImpl:public IPersonBean
{
private:
	string name;
	string gender;
	string interests;
	int rating;
	int ratingCount;
public:
	PersonBeanImpl();
	string getName() override;
	string getGender() override;
	string getInterests() override;
	int getHotOrNotRating() override;
	void setName(string name) override;
	void setGender(string gender) override;
	void setInterests(string interests) override;
	void setHotOrNotRating(int rating) override;
};

#endif