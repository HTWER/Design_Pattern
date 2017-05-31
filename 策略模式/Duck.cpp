#include "Duck.h"
#include <iostream>
using namespace std;


Duck::Duck()
{
}


Duck::~Duck()
{
}

void Duck::swin()
{
	cout << "снс╬" << endl;
}

void Duck::PerformFly()
{
	m_flyBehavior->Fly();
}

void Duck::PerformQuack()
{
	m_quackBahavior->Quack();
}

void Duck::SetFlyBehavior(FlyBehavior * flyBehavior)
{
	m_flyBehavior = flyBehavior;
}

void Duck::SetQuackBehavior(QuackBehavior * quackBahavior)
{
	m_quackBahavior = quackBahavior;
}




