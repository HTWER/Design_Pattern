#ifndef __STEREOOFFCOMMAND_H__
#define __STEREOOFFCOMMAND_H__

#include "Command.h"
#include "Stereo.h"

class StereoOffCommand:public Command
{
private:
	Stereo * stereo;
	StereoOffCommand(){};
public:
	StereoOffCommand(Stereo * stereo)
	{
		this->stereo = stereo;
	}
	void execute()
	{
		stereo->off();
	}
	void undo()
	{
		stereo->on();
	}
};

#endif