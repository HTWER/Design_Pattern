#ifndef __IBEATOBSERVER_H__
#define __IBEATOBSERVER_H__

//将该类和IBPMObserver抽象成一个更高级的抽象类，只有一个update（字典参数）方法
//这两个类实现这个抽象类，实现时需要加多一个成员变量，记录是谁在观察。因为一般获得数据之后需要与观察者进行交互。
//然后在view中包含两个新类的实例...
class IBeatObserver
{
public:
	virtual void updateBeat() = 0;
};

#endif