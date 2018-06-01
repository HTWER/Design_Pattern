#include "Image.h"

Image::Image(int width, int height, string content)
{
	this->width = width;
	this->height = height;
	this->content = content;
}

int Image::getWidth()
{
	return width;
}

int Image::getHeight()
{
	return height;
}

void Image::paint()
{
	cout << content.c_str() << endl;
}