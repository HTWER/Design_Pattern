#if 0

#include <iostream>
using namespace std;

class class0
{
public:
	void test()   
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
	virtual void test() //����������ĳ��麯��֮�󣬽����ָ��ֵ�е㲻ͬ???��ʹ��֪��Ϊʲô��Ҳ��Ӱ�����
	{
		cout << "A" << endl;
		cout << this << endl;
	}
// 	void call()   //����
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


//���ۣ�ֻҪ��ָ����ú���������Ҫ�ж�ǿת�����ͺ�ԭ������ȷ�����õ��麯��;ָ���͵���+�麯�����ж�̬Ч��
//		���ü̳������ĺ���(������ͨ�������麯����test3��֤����)��ֻ�Ǽ����ӵ������Ǳߵĺ���ȥִ�У���ʱ��������е�this�Ǹ��������
int main()
{
	//��Ҫ������Ĵ����Ի��ˣ��������û���õ���̬���Լ�ӵ�еĺ�����ʲô�͵���ʲô
// 	classB B;
// 	B.call();
//  B.test();
// 
// 	classA A;
// 	A.call();
// 	A.test();

	//A1��A2��call֮��ֵ���õ�class0��test����ΪclassA��call������������class0�ģ�����ʱA1�����ͻᱻǿת����class0������class0�е�test�������麯�������Զ�̬û��ʵ��
	classA * A1 = new classA();
	A1->call();                                  
	A1->test();

	classA * A2 = new classB();
	A2->call();
	A2->test();


	cin.get();
	return 0;
}

#endif