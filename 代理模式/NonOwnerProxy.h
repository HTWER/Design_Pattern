#ifndef __NONOWNERPROXY_H__
#define __NONOWNERPROXY_H__

#include "IPersonBean.h"

class NonOwnerProxy :public IPersonBean
{
private:
	IPersonBean* realPersonBean;
	NonOwnerProxy();
public:
	NonOwnerProxy(IPersonBean* realPersonBean);
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