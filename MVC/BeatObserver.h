#ifndef __BEATOBSERVER_H__
#define __BEATOBSERVER_H__

#include "IObserver.h"

class CMVCDlg;

//这两个类实现这个抽象类，实现时需要加多一个成员变量，记录是谁在观察。因为一般获得数据之后需要与观察者进行交互。
//然后在view中包含两个新类的实例...
class BeatObserver:public IObserver				//友元...
{
private:
	CMVCDlg* mulitiObj;
	BeatObserver(){};
public:
	BeatObserver(CMVCDlg* mulitiObj);
	void update(void* observableObj) override;
};

#endif