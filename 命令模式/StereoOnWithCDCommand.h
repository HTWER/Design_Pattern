#ifndef __STEREOONWITHCDCOMMAND_H__
#define __STEREOONWITHCDCOMMAND_H__

#include "Command.h"
#include "Stereo.h"

class StereoOnWithCDCommand:public Command
{
private:
	Stereo * stereo;
	int preVolume;		//记录着stereo上一次的Volume，撤销要用到

	StereoOnWithCDCommand(){};
public:
	StereoOnWithCDCommand(Stereo * stereo)
	{
		this->stereo = stereo;
	}
	void execute()
	{
		stereo->on();
		stereo->setCD();
		preVolume = stereo->getVolume();
		stereo->setVolume(11);
	}
	void undo()
	{
		stereo->setVolume(preVolume);
		stereo->outCD();
		stereo->off();
	}
};

#endif