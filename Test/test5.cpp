#if 1

#include<iostream>
using namespace std;

class Parent{
public:

	static void run(){
		cout << "Parent" << endl;
	}
	void test(int a){
		cout << "Parent:" << a << endl;
	}

	void test(int a, int b){
		cout << "Parent:" << a << " " << b << endl;
	}
};

class Child : public Parent{
public:
	static void run(int a){
		cout << "Child" << endl;
	}
	void test(int a, int b){
		cout << "Child:" << a << " " << b << endl;
	}
};

int main(){
	Child ch;
	ch.test(5, 4);
	ch.Parent::test(5, 4);	//可以访问父类的版本
	//ch.test(4);			//错误：对于普通函数(包括静态的普通函数)来说，子类若出现和父类同名函数fun，父类的所有函数fun都无法被继承下来，即使参数不同；若想要访问，必须写成ch.Parent::test(4);
	//ch.run();				//错误：原因如上
	system("pause");
	return 0;
}

#endif