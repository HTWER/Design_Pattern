#ifndef __BEATMODEL_H__
#define __BEATMODEL_H__

#include "IBeatModel.h"
#include <vector>
using namespace std;

class BeatModel :public IBeatModel
{
private:
	//�Ž��۲���ģʽ�Ŀɹ۲������У�notifyBeatObservers������Ҫ����һ���ֵ������Ȼ������ϵ�����...
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