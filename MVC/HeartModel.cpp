#include "stdafx.h"

#include "HeartModel.h"
#include "IBeatObserver.h"
#include "IBPMObserver.h"

#include <process.h>
#include <windows.h>

void HeartModel::ThreadFun(PVOID param)
{
	HeartModel *heartModel = (HeartModel *)param;
	
	int lastRate = -1;
	while (true)
	{
		int change = rand() % 10;
		if (rand() % 2 == 0)
			change = -change;

		int rate = 60000 / (heartModel->time + change);
		if (rate < 120 && rate>50)
		{
			heartModel->time += change;
			if (rate != lastRate)
			{
				lastRate = rate;
				heartModel->notifyBPMObservers();
			}
			heartModel->notifyBeatObservers();
		}

		Sleep(heartModel->time);
	}
}

HeartModel::HeartModel()
{
	_beginthread(ThreadFun, 0, this);
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