#include "stdafx.h"


#include "HeartController.h"
#include "MVCDlg.h"

HeartController::HeartController(IHeartModel* model, CMVCDlg* view)
{
	this->model = model;
	this->view = view;

	view->disableStopBtn();
	view->disableStartBtn();
}

void HeartController::start()
{

}

void HeartController::stop()
{

}

void HeartController::increaseBPM()
{

}

void HeartController::decreaseBPM()
{

}

void HeartController::setBPM(int bpm)
{

}
