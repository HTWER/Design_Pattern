#include "stdafx.h"

#include "BeatController.h"
#include "IBeatModel.h"
#include "MVCDlg.h"

BeatController::BeatController(IBeatModel* model, CMVCDlg* view)
{
	this->model = model;
	this->view = view;

	view->disableStopBtn();
	view->enableStartBtn();
}

void BeatController::start()
{
	model->on();
	view->enableStopBtn();
}

void BeatController::stop()
{
	model->off();
	view->disableStopBtn();
	view->enableStartBtn();
}

void BeatController::increaseBPM()
{
	int bpm = model->getBPM();
	model->setBPM(bpm + 1);
}

void BeatController::decreaseBPM()
{
	int bpm = model->getBPM();
	model->setBPM(bpm - 1);
}

void BeatController::setBPM(int bpm)
{
	model->setBPM(bpm);
}