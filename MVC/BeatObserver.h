#ifndef __BEATOBSERVER_H__
#define __BEATOBSERVER_H__

#include "IObserver.h"

class CMVCDlg;

//��������ʵ����������࣬ʵ��ʱ��Ҫ�Ӷ�һ����Ա��������¼��˭�ڹ۲졣��Ϊһ��������֮����Ҫ��۲��߽��н�����
//Ȼ����view�а������������ʵ��...
class BeatObserver:public IObserver				//��Ԫ...
{
private:
	CMVCDlg* mulitiObj;
	BeatObserver(){};
public:
	BeatObserver(CMVCDlg* mulitiObj);
	void update(void* observableObj) override;
};

#endif