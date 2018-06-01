#include "ImageProxy.h"

#include <windows.h>

int main()
{
	ImageProxy* imageProxy = new ImageProxy("127.0.0.1/xxx.png");

	cout << imageProxy->getWidth() << endl;
	cout << imageProxy->getHeight() << endl;
	imageProxy->paint();
	cout << imageProxy->getWidth() << endl;
	cout << imageProxy->getHeight() << endl;
	imageProxy->paint();

	Sleep(4000);
	cout << imageProxy->getWidth() << endl;
	cout << imageProxy->getHeight() << endl;

	cin.get();
	return 0;
}