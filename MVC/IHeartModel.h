#ifndef __IHEARTMODEL_H__
#define __IHEARTMODEL_H__

class Observer;

class IHeartModel
{
public:
	virtual ~IHeartModel(){};

	virtual int getHeartRate() = 0;

	virtual void registerBeatObserver(Observer* o) = 0;
	virtual void removeBeatObserver(Observer* o) = 0;
	virtual void registerBPMObserver(Observer* o) = 0;
	virtual void removeBPMObserver(Observer* o) = 0;
};

#endif