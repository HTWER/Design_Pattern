//#include <iostream>
//using namespace std;
//
//class class1
//{
//public:
//	class1(){}
//	~class1(){}
//	virtual void cost()
//	{
//		cout << "class1 cost" << endl;
//	}
//};
//
//class class2:public class1
//{
//public:
//	class2(){}
//	~class2(){}
//	virtual void cost()
//	{
//		cout << "class2 cost" << endl;
//	};
//};
//
//class class3:public class2
//{
//public:
//	class3(){}
//	~class3(){}
//// 	virtual void cost()
//// 	{
//// 		cout << "class3 cost" << endl;
//// 	}
//};
//
//
//int main()
//{
//	class1 * test = new class3();  //test�ڵ��ú���cost��ʱ�򣬻���class1����������治���ڣ�����������cost()�����Ƿ��麯�������ǣ���ȥ������class3��ȥ�����µ�cost()����ʵ�֣������ǣ��������class1�е�cost()
//
//	test->cost();
//
//	cin.get();
//
//	return 0;
//}