#include "Duck.h"
#include "MallardDuck.h"
#include "Turkey.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

//类似于一个已经定制好的系统，这个系统中的函数只认Duck
void testDuck(Duck * duck)
{
	duck->quack();
	duck->fly();
}

int main()
{
	MallardDuck * mallardDuck = new MallardDuck();

	WildTurkey * wildTurkey = new WildTurkey();

	TurkeyAdapter * turkeyAdapter = new TurkeyAdapter(wildTurkey);

	wildTurkey->gobble();
	wildTurkey->fly();

	testDuck(mallardDuck);
	testDuck(turkeyAdapter);

	system("pause");
	return 0;
}