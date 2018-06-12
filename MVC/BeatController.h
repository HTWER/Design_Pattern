#ifndef __BeatController_h__
#define __BeatController_h__

#include "IController.h"

class CMVCDlg;
class IBeatModel;

class BeatController:public IController
{
private:
	CMVCDlg* view;
	IBeatModel* model;
public:
	BeatController(IBeatModel* model, CMVCDlg* view);

	void start() override;
	void stop() override;

	void increaseBPM() override;
	void decreaseBPM() override;

	void setBPM(int bpm) override;
};

#endif