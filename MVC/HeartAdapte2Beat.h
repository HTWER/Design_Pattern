#ifndef __HEARTADAPTE2BEAT_H__
#define __HEARTADAPTE2BEAT_H__

#include "IBeatModel.h"

class HeartModel;

class HeartAdapte2Beat :public IBeatModel
{
private:
	HeartModel* heart;
	HeartAdapte2Beat(){};
public:
	HeartAdapte2Beat(HeartModel* heart);
	void on() override;
	void off() override;

	void setBPM(int bpm) override;
	int getBPM() override;

	void registerBeatObserver(Observer<CMVCDlg>* o) override;
	void removeBeatObserver(Observer<CMVCDlg>* o) override;

	void registerBPMObserver(Observer<CMVCDlg>* o) override;
	void removeBPMObserver(Observer<CMVCDlg>* o) override;
};

#endif