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
	//调用继承下来的虚函数，只是简单链接到父类那边的函数去执行，这时这个虚函数中的this是父类的类型
	Class2 * test = new Class2();
	test->func1();

	//对于普通函数，指针类型是什么就调用自己拥有的那个函数
// 	Class1 * test1 = new Class1();
// 	Class2 * test2 = new Class2();
// 
// 	test1->func2();
// 	test2->func2();

	//对于普通函数，对象类型是什么就调用自己拥有的那个函数
// 	Class1 test1;
// 	Class2 test2;
// 
// 	test1.func2();
// 	test2.func2();

	//对于普通函数，对象类型是什么就调用自己拥有的那个函数,即使是通过子类强转上来的
// 	Class1 test1;
// 	Class2 test2;
// 	test1 = (Class1)test2;
// 
// 	test1.func2();

	cin.get();
	return 0;
}

#endif

//总结论：
//调用要一个函数，都是去到该函数所属的类里面执行
//对于普通函数，看当前对象或指针类型来调用继承下来的最新版本
//对于虚函数，看当前指针类型到真实对象类型来调用最新版本