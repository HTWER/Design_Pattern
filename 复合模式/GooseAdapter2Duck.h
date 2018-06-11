#ifndef __GOOSEADAPTER2DUCK_H__
#define __GOOSEADAPTER2DUCK_H__

#include "IQuackable.h"

class Goose;

class QuackObservable;

class GooseAdapter2Duck : public IQuackable
{
private:
	Goose* goose;		//±ª  ≈‰µƒ
	QuackObservable* quackObservable;
	GooseAdapter2Duck();
public:
	GooseAdapter2Duck(Goose* goose);
	~GooseAdapter2Duck();
	void quack() override;
	void registerObserver(IObserver* observer) override;
	void removeObserver(IObserver* observer) override;
	void notifyObserver() override;
};

#endif