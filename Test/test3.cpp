#if 0


#include <iostream>
using namespace std;

class Class1
{
public:
	virtual void func1()
	{
		cout << "1:func1" << endl;
		this->func2();
	}

	void func2()
	{
		cout << "1:func2" << endl;
	}
};

// class Classzhongjian :public Class1
// {
// public:
// 	virtual void func1()
// 	{
// 		cout << "1:func1" << endl;
// 		this->func2();
// 	}
// 
// 	void func2()
// 	{
// 		cout << "zhong:func2" << endl;
// 	}
// };

class Class2 :public Class1
{
public:
	void func2()
	{
		cout << "2:func2" << endl;
	}
};
	
int main()
{
	//���ü̳��������麯����ֻ�Ǽ����ӵ������Ǳߵĺ���ȥִ�У���ʱ����麯���е�this�Ǹ��������
	Class2 * test = new Class2();
	test->func1();

	//������ͨ������ָ��������ʲô�͵����Լ�ӵ�е��Ǹ�����
// 	Class1 * test1 = new Class1();
// 	Class2 * test2 = new Class2();
// 
// 	test1->func2();
// 	test2->func2();

	//������ͨ����������������ʲô�͵����Լ�ӵ�е��Ǹ�����
// 	Class1 test1;
// 	Class2 test2;
// 
// 	test1.func2();
// 	test2.func2();

	//������ͨ����������������ʲô�͵����Լ�ӵ�е��Ǹ�����,��ʹ��ͨ������ǿת������
// 	Class1 test1;
// 	Class2 test2;
// 	test1 = (Class1)test2;
// 
// 	test1.func2();

	cin.get();
	return 0;
}

#endif

//�ܽ��ۣ�
//����Ҫһ������������ȥ���ú���������������ִ��
//������ͨ����������ǰ�����ָ�����������ü̳����������°汾
//�����麯��������ǰָ�����͵���ʵ�����������������°汾