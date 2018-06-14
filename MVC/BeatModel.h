#ifndef __BEATMODEL_H__
#define __BEATMODEL_H__

#include "IBeatModel.h"
#include "Observable.h"

class CMVCDlg;

class BeatModel :public IBeatModel
{
private:
	int bpm = 90;
	bool isOn = false;
	static void ThreadFun(PVOID param);
	Observable<CMVCDlg> beatObservable;
	Observable<CMVCDlg> bpmObservable;
public:
	void on() override;
	void off() override;

	void setBPM(int bpm) override;
	int getBPM() override;

	void registerBeatObserver(Observer<CMVCDlg>* o) override;
	void removeBeatObserver(Observer<CMVCDlg>* o) override;
	void notifyBeatObservers();		//notify����֮���Բ������麯��������Ϊ����������Ŀ��

	void registerBPMObserver(Observer<CMVCDlg>* o) override;
	void removeBPMObserver(Observer<CMVCDlg>* o) override;
	void notifyBPMObservers();
};

#endif