#ifndef __HEARTMODEL_H__
#define __HEARTMODEL_H__

#include "IHeartModel.h"
#include <vector>
using namespace std;

class HeartModel :public IHeartModel
{
private:
	vector<Observer<CMVCDlg>*> beatObservers;
	vector<Observer<CMVCDlg>*> bpmObservers;
	int time = 1000;		//心跳间隔
	int bpm = 90;			//无用
	static void ThreadFun(PVOID param);
public:
	HeartModel();
	
	int getHeartRate() override;

	void registerBeatObserver(Observer<CMVCDlg>* o) override;
	void removeBeatObserver(Observer<CMVCDlg>* o) override;
	void notifyBeatObservers();

	void registerBPMObserver(Observer<CMVCDlg>* o) override;
	void removeBPMObserver(Observer<CMVCDlg>* o) override;
	void notifyBPMObservers();
};

#endif