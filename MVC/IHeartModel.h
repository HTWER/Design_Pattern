#ifndef __IHEARTMODEL_H__
#define __IHEARTMODEL_H__

class IBeatObserver;
class IBPMObserver;

class IHeartModel
{
public:
	virtual ~IHeartModel(){};

	virtual int getHeartRate() = 0;

	virtual void registerObserver(IBeatObserver* o) = 0;
	virtual void removeObserver(IBeatObserver* o) = 0;
	virtual void registerObserver(IBPMObserver* o) = 0;
	virtual void removeObserver(IBPMObserver* o) = 0;
};

#endif