#include "stdafx.h"

#include "HeartAdapte2Beat.h"
#include "HeartModel.h"
#include "Observer.h"

HeartAdapte2Beat::HeartAdapte2Beat(HeartModel* heart)
{
	this->heart = heart;
}

void HeartAdapte2Beat::on()
{

}

void HeartAdapte2Beat::off()
{

}

void HeartAdapte2Beat::setBPM(int bpm)
{

}

int HeartAdapte2Beat::getBPM()
{
	return heart->getHeartRate();
}

void HeartAdapte2Beat::registerBeatObserver(Observer<CMVCDlg>* o)
{
	heart->registerBeatObserver(o);
}

void HeartAdapte2Beat::removeBeatObserver(Observer<CMVCDlg>* o)
{
	heart->removeBeatObserver(o);
}

void HeartAdapte2Beat::registerBPMObserver(Observer<CMVCDlg>* o)
{
	heart->registerBPMObserver(o);
}

void HeartAdapte2Beat::removeBPMObserver(Observer<CMVCDlg>* o)
{
	heart->removeBPMObserver(o);
}
