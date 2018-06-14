#include "stdafx.h"

#include "HeartModel.h"
#include "Observer.h"

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

void HeartModel::registerBeatObserver(Observer<CMVCDlg>* o)
{
	beatObservable.registerObserver(o);
}

void HeartModel::removeBeatObserver(Observer<CMVCDlg>* o)
{
	beatObservable.removeObserver(o);
}

void HeartModel::notifyBeatObservers()
{
	beatObservable.notifyObservers(this);
}

void HeartModel::registerBPMObserver(Observer<CMVCDlg>* o)
{
	bpmObservable.registerObserver(o);
}

void HeartModel::removeBPMObserver(Observer<CMVCDlg>* o)
{
	bpmObservable.removeObserver(o);
}

void HeartModel::notifyBPMObservers()
{
	bpmObservable.notifyObservers(this);
}