#include <iostream>
#include "Singleton.h"
using namespace std;

Singleton * Singleton::uniqueInstance = NULL;

Singleton * Singleton::getIntance()			
{
	//注意：如果是多线程的程序，可能会创建出多个实例；
	//解决方案是使用临界区
	//if(uniqueInstance == NULL)
	//{
	//------------临界区------------
	if (uniqueInstance == NULL)			//判断当前是否还没有创建过实例
		uniqueInstance = new Singleton();
	//------------临界区------------
	//}
	return uniqueInstance;
}