#include "stdafx.h"

#include "BeatModel.h"
#include "IBeatObserver.h"
#include "IBPMObserver.h"

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

void BeatModel::registerObserver(IBeatObserver* o)
{
	beatObservers.push_back(o);
}

void BeatModel::removeObserver(IBeatObserver* o)
{
	vector<IBeatObserver*>::iterator iter;
	for (iter = beatObservers.begin(); iter != beatObservers.end(); iter++)
	{
		if (*iter == 0)
			break;
	}
	beatObservers.erase(iter);
}

void BeatModel::notifyBeatObservers()
{
	for each (IBeatObserver* var in beatObservers)
		var->updateBeat();
}

void BeatModel::registerObserver(IBPMObserver* o)
{
	bpmObservers.push_back(o);
}

void BeatModel::removeObserver(IBPMObserver* o)
{
	vector<IBPMObserver*>::iterator iter;
	for (iter = bpmObservers.begin(); iter != bpmObservers.end(); iter++)
	{
		if (*iter == 0)
			break;
	}
	bpmObservers.erase(iter);
}

void BeatModel::notifyBPMObservers()
{
	for each (IBPMObserver* var in bpmObservers)
		var->updateBPM();
}