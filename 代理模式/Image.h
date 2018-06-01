#ifndef __IMAGE_H__
#define __IMAGE_H__

#include <iostream>
using namespace std;

class Image
{
private:
	int width;
	int height;
	string content;
public:
	Image(int width, int height, string content);
	int getWidth();
	int getHeight();
	void paint();
};

#endif