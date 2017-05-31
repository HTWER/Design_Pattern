#include <iostream>

#include "GreenDuck.h"
#include "RedDuck.h"
#include "DecoyDuck.h"

#include "FlyNoWay.h"
#include "FlyWithWings.h"

#include "QuackGG.h"
#include "QuackZZ.h"
#include "QuackNoWay.h"

using namespace std;

int main()
{
	//创建芯片，准确的说这些都是接口
	FlyWithWings * flyWithWings = new FlyWithWings;
	FlyNoWay * flyNoWay = new FlyNoWay;

	QuackGG * quackGG = new QuackGG;
	QuackZZ * quackZZ = new QuackZZ;
	QuackNoWay * quackNoWay = new QuackNoWay;

	//组装鸭子
	GreenDuck greenDuck;
	greenDuck.SetFlyBehavior(flyWithWings);
	greenDuck.SetQuackBehavior(quackGG);

	RedDuck redDuck;
	redDuck.SetFlyBehavior(flyNoWay);
	redDuck.SetQuackBehavior(quackZZ);

	DecoyDuck decoyDeck;
	decoyDeck.SetFlyBehavior(flyNoWay);
	decoyDeck.SetQuackBehavior(quackNoWay);

	//测试
	greenDuck.Display();
	greenDuck.PerformFly();
	greenDuck.PerformQuack();
	cout << endl;

	redDuck.Display();
	redDuck.PerformFly();
	redDuck.PerformQuack();
	cout << endl;

	decoyDeck.Display();
	decoyDeck.PerformFly();
	decoyDeck.PerformQuack();
	cout << endl;

	cin.get();
	return 0;
}