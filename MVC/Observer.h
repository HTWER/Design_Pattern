#ifndef __OBSERVER_H__
#define __OBSERVER_H__

template <typename T>
class Observer
{
	typedef void(T::*p_func)(void*);
public:
	virtual ~Observer(){};

	T* mulitiObj;
	p_func updateFun;

	Observer(T* mulitiObj, p_func updateFun)
	{
 		this->mulitiObj = mulitiObj;
 		this->updateFun = updateFun;
	}

	void update(void* observableObj)
	{
		(mulitiObj->*updateFun)(observableObj);
	}
};

#endif