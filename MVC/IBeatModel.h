#ifndef __IBEATMODEL_H__
#define __IBEATMODEL_H__

class Observer;

class IBeatModel
{
public:
	virtual ~IBeatModel(){};

	virtual void on() = 0;
	virtual void off() = 0;
	virtual void setBPM(int bpm) = 0;
	virtual int getBPM() = 0;

	//可以独立成一个接口，再包含量该接口实例...
	virtual void registerBeatObserver(Observer* o) = 0;
	virtual void removeBeatObserver(Observer* o) = 0;
	virtual void registerBPMObserver(Observer* o) = 0;
	virtual void removeBPMObserver(Observer* o) = 0;
};

#endif