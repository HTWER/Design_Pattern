#ifndef __IBEATMODEL_H__
#define __IBEATMODEL_H__

template <typename T>
class Observer;

class CMVCDlg;

class IBeatModel
{
public:
	virtual ~IBeatModel(){};

	virtual void on() = 0;
	virtual void off() = 0;
	virtual void setBPM(int bpm) = 0;
	virtual int getBPM() = 0;

	virtual void registerBeatObserver(Observer<CMVCDlg>* o) = 0;
	virtual void removeBeatObserver(Observer<CMVCDlg>* o) = 0;
	virtual void registerBPMObserver(Observer<CMVCDlg>* o) = 0;
	virtual void removeBPMObserver(Observer<CMVCDlg>* o) = 0;
};

#endif