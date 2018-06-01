#include "ImageProxy.h"
#include "Image.h"

#include <process.h>
#include <windows.h>

ImageProxy::ImageProxy(string imageURL)
{
	this->imageURL = imageURL;
}

int ImageProxy::getWidth()
{
	if (image != NULL)
		return image->getWidth();
	else
		return 800;
}

int ImageProxy::getHeight()
{
	if (image != NULL)
		return image->getHeight();
	else
		return 600;
}

static void CreateImage(PVOID param)
{
	ImageProxy* imageProxy = (ImageProxy*)(param);
	Sleep(3000);
	imageProxy->image = new Image(1920, 1080, imageProxy->imageURL + ": " + "A beautiful picture!");
	imageProxy->paint();
}
void ImageProxy::paint()
{
	if (image != NULL)
		image->paint();		//这里为了演示方便，paint其实只是打印出文字
	else
	{
		cout << "Loading, please wait..." << endl;
		if (!receiving)
		{
			receiving = true;
			//开启一个独立的线程异步下载图片
			_beginthread(CreateImage, 0, this);
		}
	}
}