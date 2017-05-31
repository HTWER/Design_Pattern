#include "Duck.h"
#include "MallardDuck.h"
#include "Turkey.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

//������һ���Ѿ����ƺõ�ϵͳ�����ϵͳ�еĺ���ֻ��Duck
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