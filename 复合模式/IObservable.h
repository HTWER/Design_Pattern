#ifndef __IOBSERVABLE_H__
#define __IOBSERVABLE_H__

#include <vector>
using namespace std;

class IObserver;

//�����Ŀ�У��ṹ����Ʊ�ԭ����Ҫ�ã��������У�notifyObserver����ֻ��Ҫ��дһ�ξͺ�
class IObservable
{
protected:
	vector<IObserver*> observers;
public:
	virtual ~IObservable(){};
	virtual void registerObserver(IObserver* observer);
	virtual void removeObserver(IObserver* observer);
	virtual void notifyObserver() = 0;
};

#endif