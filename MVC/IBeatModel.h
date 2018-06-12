#ifndef __IBEATMODEL_H__
#define __IBEATMODEL_H__

class IBeatObserver;
class IBPMObserver;

class IBeatModel
{
public:
	virtual ~IBeatModel(){};

	virtual void on() = 0;
	virtual void off() = 0;
	virtual void setBPM(int bpm) = 0;
	virtual int getBPM() = 0;

	//���Զ�����һ���ӿڣ��ٰ������ýӿ�ʵ��...
	virtual void registerObserver(IBeatObserver* o) = 0;
	virtual void removeObserver(IBeatObserver* o) = 0;
	virtual void registerObserver(IBPMObserver* o) = 0;
	virtual void removeObserver(IBPMObserver* o) = 0;
};

#endif