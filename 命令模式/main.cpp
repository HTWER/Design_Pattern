#include <iostream>
#include "RemoteControl.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "Stereo.h"
#include "StereoOnWithCDCommand.h"
#include "StereoOffCommand.h"
#include "MacroCommand.h"
using namespace std;

int main()
{
	Light * light = new Light();
	LightOnCommand * lightOnCommand = new LightOnCommand(light);
	LightOffCommand * lightOffCommand = new LightOffCommand(light);

	Stereo * stereo = new Stereo();
	StereoOnWithCDCommand * stereoOnWithCDCommand = new StereoOnWithCDCommand(stereo);
	StereoOffCommand * stereoOffCommand = new StereoOffCommand(stereo);

	RemoteControl * remoteControl = new RemoteControl();
	remoteControl->setCommand(0, lightOnCommand,lightOffCommand);
	remoteControl->setCommand(1, stereoOnWithCDCommand, stereoOffCommand);

	remoteControl->onButtonWasPushed(0);
	remoteControl->undoButtonWasPushed();

	remoteControl->onButtonWasPushed(1);
	remoteControl->undoButtonWasPushed();

	remoteControl->offButtonWasPushed(0);
	remoteControl->undoButtonWasPushed();

	remoteControl->offButtonWasPushed(1);
	remoteControl->undoButtonWasPushed();

	//宏命令
	cout << endl << "宏命令：" << endl;
	Command* commands1[] = { lightOnCommand, stereoOnWithCDCommand };
	MacroCommand * macroCommand1 = new MacroCommand(commands1, 2);

	Command* commands2[] = { stereoOffCommand, lightOffCommand };
	MacroCommand * macroCommand2 = new MacroCommand(commands2, 2);

	remoteControl->setCommand(2, macroCommand1, macroCommand2);

	remoteControl->onButtonWasPushed(2);
	remoteControl->undoButtonWasPushed();

	remoteControl->offButtonWasPushed(2);
	remoteControl->undoButtonWasPushed();

	//多重撤销功能
	cout << endl << "多重撤销功能：" << endl;
	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	remoteControl->onButtonWasPushed(0);

	remoteControl->undoButtonWasPushed();
	remoteControl->undoButtonWasPushed();
	remoteControl->undoButtonWasPushed();
	remoteControl->undoButtonWasPushed();

	system("pause");
	return 0;
}