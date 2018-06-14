#include "stdafx.h"

#include "BeatModel.h"
#include "Observer.h"

#include <process.h>
#include <windows.h>

void BeatModel::ThreadFun(PVOID param)
{
	BeatModel *beatModel = (BeatModel *)param;
	while (beatModel->isOn){
		beatModel->notifyBeatObservers();
		Sleep(60000 / beatModel->bpm);
	}
}

void BeatModel::on()
{
	setBPM(90);
	isOn = true;
	_beginthread(ThreadFun, 0, this);
}

void BeatModel::off()
{
	setBPM(0);
	isOn = false;
}

void BeatModel::setBPM(int bpm)
{
	this->bpm = bpm;
	notifyBPMObservers();
}

int BeatModel::getBPM()
{
	return bpm;
}

void BeatModel::registerBeatObserver(Observer* o)
{
	beatObservers.push_back(o);
}

void BeatModel::removeBeatObserver(Observer* o)
{
	vector<Observer*>::iterator iter;
	for (iter = beatObservers.begin(); iter != beatObservers.end(); iter++)
	{
		if (*iter == 0)
			break;
	}
	beatObservers.erase(iter);
}

void BeatModel::notifyBeatObservers()
{
	for each (Observer* var in beatObservers)
		var->update(this);
}

void BeatModel::registerBPMObserver(Observer* o)
{
	bpmObservers.push_back(o);
}

void BeatModel::removeBPMObserver(Observer* o)
{
	vector<Observer*>::iterator iter;
	for (iter = bpmObservers.begin(); iter != bpmObservers.end(); iter++)
	{
		if (*iter == 0)
			break;
	}
	bpmObservers.erase(iter);
}

void BeatModel::notifyBPMObservers()
{
	for each (Observer* var in bpmObservers)
		var->update(this);
}