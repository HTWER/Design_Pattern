#ifndef __IMAGEPROXY_H__
#define __IMAGEPROXY_H__

#include <iostream>
using namespace std;

class Image;

class ImageProxy
{
private:
	bool receiving = false;
public:	
	Image* image;		//析构时释放
	string imageURL;
	ImageProxy(string imageURL);
	int getWidth();
	int getHeight();
	void paint();
};

#endif