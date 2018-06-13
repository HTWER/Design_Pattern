#include "stdafx.h"

#include "HeartModel.h"
#include "IBeatObserver.h"
#include "IBPMObserver.h"

HeartModel::HeartModel()
{
	//开个心跳线程...
}

void HeartModel::run()
{
	//...
}

int HeartModel::getHeartRate()
{
	return 60000 / time;
}

void HeartModel::registerObserver(IBeatObserver* o)
{
	beatObservers.push_back(o);
}

void HeartModel::removeObserver(IBeatObserver* o)
{
	vector<IBeatObserver*>::iterator iter;
	for (iter = beatObservers.begin(); iter != beatObservers.end(); iter++)
	{
		if (*iter == 0)
			break;
	}
	beatObservers.erase(iter);
}

void HeartModel::notifyBeatObservers()
{
	for each (IBeatObserver* var in beatObservers)
		var->updateBeat();
}

void HeartModel::registerObserver(IBPMObserver* o)
{
	bpmObservers.push_back(o);
}

void HeartModel::removeObserver(IBPMObserver* o)
{
	vector<IBPMObserver*>::iterator iter;
	for (iter = bpmObservers.begin(); iter != bpmObservers.end(); iter++)
	{
		if (*iter == 0)
			break;
	}
	bpmObservers.erase(iter);
}

void HeartModel::notifyBPMObservers()
{
	for each (IBPMObserver* var in bpmObservers)
		var->updateBPM();
}