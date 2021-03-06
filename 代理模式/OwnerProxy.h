#ifndef __OWNERPROXY_H__
#define __OWNERPROXY_H__

#include "IPersonBean.h"

class OwnerProxy :public IPersonBean
{
private:
	IPersonBean* realPersonBean;
	OwnerProxy();
public:
	OwnerProxy(IPersonBean* realPersonBean);
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