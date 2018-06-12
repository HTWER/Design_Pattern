#ifndef __ICONTROLLER_H__
#define __ICONTROLLER_H__

class IController
{
public:
	virtual ~IController(){};

	virtual void start() = 0;
	virtual void stop() = 0;
	virtual void increaseBPM() = 0;
	virtual void decreaseBPM() = 0;
	virtual void setBPM(int bpm) = 0;
};

#endif