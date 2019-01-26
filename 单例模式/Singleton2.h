#ifndef __SINGLETON2_H__
#define __SINGLETON2_H__

class Singleton2
{
private:
	static Singleton2 uniqueInstance;
	Singleton2(){};							//将默认构造方法隐藏起来
public:
	~Singleton2(){};

	//唯一可以获取实例的方法
	//设置为静态的，可以在任何包含了该头文件的地方通过类来调用
	static Singleton2 * getIntance();
};
#endif
