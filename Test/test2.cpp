#if 1

#include <iostream>
using namespace std;

class class0
{
public:
	void test()		//加上virtual后，指针有点不同
	{
		cout << "0" << endl;
		cout << this << endl;
	}
	void call()
	{
		cout << this << endl;
		this->test();
	}
};


class classA:public class0
{
public:
	virtual void test() //把这个函数改成虚函数之后，结果的指针值有点不同???即使不知道为什么，也不影响结论
	{
		cout << "A" << endl;
		cout << this << endl;
	}
// 	void call()   //覆盖
// 	{
// 		cout << this << endl;
// 		this->test();
// 	}
};

class classB:public classA
{
public:
	void test()
	{
		cout << "B" << endl;
		cout << this << endl;
	}
};


//结论：只要是指针调用函数，都需要判断静态类型和动态类型来确定调用的虚函数;指针型调用+虚函数才有多态效果
//		调用函数时，this满足"一链同针"、"异链异针"
int main()
{
	//不要被下面的代码迷惑了，下面根本没有用到多态。自己拥有的函数是什么就调用什么
// 	classB B;
// 	B.call();
//  B.test();
// 
// 	classA A;
// 	A.call();
// 	A.test();

	//A1和A2在call之后都只调用到class0的test是因为classA的call函数是在来自class0的，调用时A1的类型会被强转成了class0，但是class0中的test还不是虚函数，所以多态没有实现
	classA * A1 = new classA();
	A1->call();                                  
	A1->test();

	//classA * A2 = new classB();
	//A2->call();
	//A2->test();

	cin.get();
	return 0;
}

#endif