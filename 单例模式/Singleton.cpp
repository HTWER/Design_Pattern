#include <iostream>
#include "Singleton.h"
using namespace std;

Singleton * Singleton::uniqueInstance = NULL;

Singleton * Singleton::getIntance()			
{
	//ע�⣺����Ƕ��̵߳ĳ��򣬿��ܻᴴ�������ʵ����
	//���������ʹ���ٽ���
	//if(uniqueInstance == NULL)
	//{
	//------------�ٽ���------------
	if (uniqueInstance == NULL)			//�жϵ�ǰ�Ƿ�û�д�����ʵ��
		uniqueInstance = new Singleton();
	//------------�ٽ���------------
	//}
	return uniqueInstance;
}