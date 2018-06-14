#include "stdafx.h"

#include "HeartAdapte2Beat.h"
#include "HeartModel.h"

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

void HeartAdapte2Beat::registerBeatObserver(Observer* o)
{
	heart->registerBeatObserver(o);
}

void HeartAdapte2Beat::removeBeatObserver(Observer* o)
{
	heart->removeBeatObserver(o);
}

void HeartAdapte2Beat::registerBPMObserver(Observer* o)
{
	heart->registerBPMObserver(o);
}

void HeartAdapte2Beat::removeBPMObserver(Observer* o)
{
	heart->removeBPMObserver(o);
}
