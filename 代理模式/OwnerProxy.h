#ifndef __OWNERPROXY_H__
#define __OWNERPROXY_H__

#include "PersonBean.h"

class OwnerProxy :public PersonBean
{
private:
	PersonBean* realPersonBean;
	OwnerProxy();
public:
	OwnerProxy(PersonBean* realPersonBean);
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