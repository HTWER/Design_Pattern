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
//	class1 * test = new class3();  //test在调用函数cost的时候，会检查class1中这个函数存不存在；若存在则检查cost()函数是否虚函数；若是，则去调用往class3下去的最新的cost()函数实现；若不是，则仅进行class1中的cost()
//
//	test->cost();
//
//	cin.get();
//
//	return 0;
//}