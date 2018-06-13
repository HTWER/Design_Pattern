#ifndef __HEARTMODEL_H__
#define __HEARTMODEL_H__

#include "IHeartModel.h"
#include <vector>
using namespace std;

class IBeatObserver;
class IBPMObserver;

class HeartModel :public IHeartModel
{
private:
	vector<IBeatObserver*> beatObservers;
	vector<IBPMObserver*> bpmObservers;
	int time = 1000;		//心跳间隔
	int bpm = 90;			//无用
public:
	HeartModel();
	void run();		//心跳的线程函数？？？

	int getHeartRate() override;

	void registerObserver(IBeatObserver* o) override;
	void removeObserver(IBeatObserver* o) override;
	void notifyBeatObservers();

	void registerObserver(IBPMObserver* o) override;
	void removeObserver(IBPMObserver* o) override;
	void notifyBPMObservers();
};

#endif