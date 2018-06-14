#include "stdafx.h"

#include "BeatModel.h"
#include "Observer.h"
#include "MVCDlg.h"

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

void BeatModel::registerBeatObserver(Observer<CMVCDlg>* o)
{
	beatObservable.registerObserver(o);
}

void BeatModel::removeBeatObserver(Observer<CMVCDlg>* o)
{
	beatObservable.removeObserver(o);
}

void BeatModel::notifyBeatObservers()
{
	beatObservable.notifyObservers(this);
}

void BeatModel::registerBPMObserver(Observer<CMVCDlg>* o)
{
	bpmObservable.registerObserver(o);
}

void BeatModel::removeBPMObserver(Observer<CMVCDlg>* o)
{
	bpmObservable.removeObserver(o);
}

void BeatModel::notifyBPMObservers()
{
	bpmObservable.notifyObservers(this);
}