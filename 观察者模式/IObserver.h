#ifndef __IOBSERVER_H__
#define __IOBSERVER_H__

struct DataPakeger;
class IObservable;

//接口类，接到了Subject主题类的observersList中
class IObserver
{
public:
	virtual ~IObserver();

	//观察的主题对象
	IObservable * subject;

	void toRegister(IObservable * subject);
	void toCancel();

	virtual void update(DataPakeger data) = 0;			//这个接口的参数设计不合理，用字典好些...
};

#endif


