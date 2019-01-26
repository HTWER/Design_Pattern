#ifndef __SINGLETON_H__
#define __SINGLETON_H__

class Singleton
{
private:
	static Singleton * uniqueInstance;
	Singleton(){};							//将默认构造方法隐藏起来
public:
	~Singleton(){};

	//唯一可以获取实例的方法
	//设置为静态的，可以在任何包含了该头文件的地方通过类来调用
	static Singleton * getIntance();		
};



#endif
