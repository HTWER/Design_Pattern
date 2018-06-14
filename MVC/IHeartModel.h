#ifndef __IHEARTMODEL_H__
#define __IHEARTMODEL_H__

template <typename T>
class Observer;

class CMVCDlg;

class IHeartModel
{
public:
	virtual ~IHeartModel(){};

	virtual int getHeartRate() = 0;

	virtual void registerBeatObserver(Observer<CMVCDlg>* o) = 0;
	virtual void removeBeatObserver(Observer<CMVCDlg>* o) = 0;
	virtual void registerBPMObserver(Observer<CMVCDlg>* o) = 0;
	virtual void removeBPMObserver(Observer<CMVCDlg>* o) = 0;
};

#endif