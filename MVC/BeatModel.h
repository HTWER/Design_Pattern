#ifndef __BEATMODEL_H__
#define __BEATMODEL_H__

#include "IBeatModel.h"

template <typename T>
class Observable;

class CMVCDlg;

class BeatModel :public IBeatModel
{
private:
	int bpm = 90;
	bool isOn = false;
	static void ThreadFun(PVOID param);
	Observable<CMVCDlg>* beatObservable;
	Observable<CMVCDlg>* bpmObservable;
public:
	BeatModel();

	void on() override;
	void off() override;

	void setBPM(int bpm) override;
	int getBPM() override;

	void registerBeatObserver(Observer<CMVCDlg>* o) override;
	void removeBeatObserver(Observer<CMVCDlg>* o) override;
	void notifyBeatObservers();		//notify函数之所以不用是虚函数，是因为它不是适配目标

	void registerBPMObserver(Observer<CMVCDlg>* o) override;
	void removeBPMObserver(Observer<CMVCDlg>* o) override;
	void notifyBPMObservers();
};

#endif