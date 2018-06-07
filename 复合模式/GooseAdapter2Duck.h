#ifndef __GOOSEADAPTER2DUCK_H__
#define __GOOSEADAPTER2DUCK_H__

#include "IQuackable.h"

class Goose;

class GooseAdapter2Duck : public IQuackable
{
private:
	Goose* goose;
	GooseAdapter2Duck();
public:
	GooseAdapter2Duck(Goose* goose);
	~GooseAdapter2Duck();
	void quack() override;
};

#endif