#ifndef __BPMOBSERVER_H__
#define __BPMOBSERVER_H__

#include "IObserver.h"

class CMVCDlg;

class BPMObserver :public IObserver				//��Ԫ...
{
private:
	CMVCDlg* mulitiObj;
	BPMObserver(){};
public:
	BPMObserver(CMVCDlg* mulitiObj);
	void update(void* observableObj) override;
};

#endif