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
	ch.Parent::test(5, 4);	//���Է��ʸ���İ汾
	//ch.test(4);			//���󣺶�����ͨ����(������̬����ͨ����)��˵�����������ֺ͸���ͬ������fun����������к���fun���޷����̳���������ʹ������ͬ������Ҫ���ʣ�����д��ch.Parent::test(4);
	//ch.run();				//����ԭ������
	system("pause");
	return 0;
}

#endif