#ifndef __HEARTMODEL_H__
#define __HEARTMODEL_H__

#include "IHeartModel.h"
#include <vector>
using namespace std;

class Observer;

class HeartModel :public IHeartModel
{
private:
	vector<Observer*> beatObservers;
	vector<Observer*> bpmObservers;
	int time = 1000;		//心跳间隔
	int bpm = 90;			//无用
	static void ThreadFun(PVOID param);
public:
	HeartModel();
	
	int getHeartRate() override;

	void registerBeatObserver(Observer* o) override;
	void removeBeatObserver(Observer* o) override;
	void notifyBeatObservers();

	void registerBPMObserver(Observer* o) override;
	void removeBPMObserver(Observer* o) override;
	void notifyBPMObservers();
};

#endif