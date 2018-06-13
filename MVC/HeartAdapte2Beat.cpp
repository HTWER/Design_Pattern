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

void HeartAdapte2Beat::registerObserver(IBeatObserver* o)
{
	heart->registerObserver(o);
}

void HeartAdapte2Beat::removeObserver(IBeatObserver* o)
{
	heart->removeObserver(o);
}

void HeartAdapte2Beat::registerObserver(IBPMObserver* o)
{
	heart->registerObserver(o);
}

void HeartAdapte2Beat::removeObserver(IBPMObserver* o)
{
	heart->removeObserver(o);
}
