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

	void registerObserver(IBeatObserver* o) override;
	void removeObserver(IBeatObserver* o) override;

	void registerObserver(IBPMObserver* o) override;
	void removeObserver(IBPMObserver* o) override;
};

#endif