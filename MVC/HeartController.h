#ifndef __HEARTCONTROLLER_H__
#define __HEARTCONTROLLER_H__

#include "IController.h"

class CMVCDlg;
class IHeartModel;

class HeartController:public IController
{
private:
	CMVCDlg* view;
	IHeartModel* model;
	HeartController(){};
public:
	HeartController(IHeartModel* model, CMVCDlg* view);

	void start() override;
	void stop() override;

	void increaseBPM() override;
	void decreaseBPM() override;

	void setBPM(int bpm) override;
};

#endif