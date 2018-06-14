#ifndef __OBSERVER_H__
#define __OBSERVER_H__

class CMVCDlg;

class Observer
{
	typedef void(CMVCDlg::*p_func)(void*);
public:
	virtual ~Observer(){};

	p_func updateFun;
	CMVCDlg* mulitiObj;

	Observer(CMVCDlg* mulitiObj, p_func updateFun)
	{
		this->mulitiObj = mulitiObj;
		this->updateFun = updateFun;
	}

	virtual void update(void* observableObj)
	{
		(mulitiObj->*updateFun)(observableObj);
	}
};

#endif