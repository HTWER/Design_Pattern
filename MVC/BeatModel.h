#ifndef __BEATMODEL_H__
#define __BEATMODEL_H__

#include "IBeatModel.h"
#include <vector>
using namespace std;

class BeatModel :public IBeatModel
{
private:
	//放进观察者模式的可观察者类中，notifyBeatObservers函数需要带有一个字典参数，然后在组合到这里...
	vector<Observer*> beatObservers;
	vector<Observer*> bpmObservers;
	/////////////////////////////////////
	int bpm = 90;
	bool isOn = false;
	static void ThreadFun(PVOID param);
public:
	void on() override;
	void off() override;

	void setBPM(int bpm) override;
	int getBPM() override;

	void registerBeatObserver(Observer* o) override;
	void removeBeatObserver(Observer* o) override;
	void notifyBeatObservers();

	void registerBPMObserver(Observer* o) override;
	void removeBPMObserver(Observer* o) override;
	void notifyBPMObservers();
};

#endif